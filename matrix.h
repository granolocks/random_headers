#ifndef MATRIX_H
#define MATRIX_H

//
// USE AT YOUR OWN RISK ^_^'
//

#include <stdlib.h>
#include <string.h>
#include <assert.h>

// Allocate a matrix of WxH elements and of element with size == to type T
#define MATRIX(w, h, T) matrix_alloc(w, h, sizeof(T))

// Retrieve element of type T at coordinate x,y from matrix
#define MATRIX_GET(matrix, T, x, y)\
  (T) ((T*) matrix->elements)[matrix->w * y + x]

// Set element of type T with some value at coordinate x,y into matrix
#define MATRIX_SET(matrix, T, x, y, val)\
  ((T*) matrix->elements)[matrix->w * y + x] = val 

// iterate across each eleement of matrix and call some function passed to the macro
// fn signature should look like void some_fn(Matrix* m, size_t index, T* element);
//
// note this is called _MAP but really it is just an iterator helper and doesn't 
// create a new matrix or modify the original unless specified in the provided fn
#define MATRIX_MAP(matrix, T, fn) \
  for(size_t i = 0; i < matrix->w * matrix->h; i++) {\
    fn(matrix, i, &((T*) matrix->elements)[i]);\
  }

// Generates a function to add together two matrices of type T. 
// Must have the same dimensions and element size.
//
// In practice the second matrix (b) will be added into (a) destructively and
// so (a) is mutated by this operation
#define MATRIX_ADDER(adder, T) \
void adder(Matrix* a, Matrix* b) {\
  assert(a->w == b->w);\
  assert(a->h == b->h);\
  assert(a->sz == b->sz);\
  for(size_t i = 0; i < matrix_element_len(a); i++) {\
    ((T*) a->elements)[i] += ((T*) b->elements)[i];\
  }\
}

struct Matrix {
  // # of columns
  size_t w;

  // # of rows
  size_t h;

  // size of element
  size_t sz;

  // elements array
  void* elements;
};
typedef struct Matrix Matrix;

// get # elements
size_t matrix_element_len(Matrix* matrix) {
  return matrix->w * matrix->h;
}

// get # bytes for elements
size_t matrix_element_len_bytes(Matrix* matrix) {
  return matrix->sz * matrix_element_len(matrix);
}

// alloc space for a matrix and its elements, return pointer
Matrix* matrix_alloc(size_t w, size_t h, size_t sz) {
  Matrix* matrix;
  matrix = (Matrix*) malloc(sizeof(Matrix));
  matrix->w = w;
  matrix->h = h;
  matrix->sz = sz;

  void* elements;
  elements = malloc(matrix_element_len_bytes(matrix));
  matrix->elements = elements;

  return matrix;
}

// clone a matrix -- deep copy using memcpy
Matrix* matrix_clone(Matrix* orig) {
  Matrix* new_matrix;
  new_matrix = matrix_alloc(orig->w, orig->h, orig->sz);
  memcpy(new_matrix->elements, orig->elements, matrix_element_len_bytes(orig));
  return new_matrix;
}

// release me 
void matrix_free(Matrix* matrix) {
  free(matrix->elements);
  free(matrix);
}

#endif
