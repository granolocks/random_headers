#ifndef MATRIX_H
#define MATRIX_H

//
// USE AT YOUR OWN RISK ^_^'
//

#include <stdlib.h>
#include <string.h>

#define MATRIX(w, h, T) matrix_alloc(w, h, sizeof(T))

#define MATRIX_GET(matrix, T, x, y)\
  (T) ((T*) matrix->elements)[matrix->w * y + x]

#define MATRIX_SET(matrix, T, x, y, val)\
  ((T*) matrix->elements)[matrix->w * y + x] = val 

#define MATRIX_MAP(matrix, T, fn) \
  for(size_t i = 0; i < matrix->w * matrix->h; i++) {\
    fn(matrix, i, &((T*) matrix->elements)[i]);\
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

size_t matrix_element_len_bytes(Matrix* matrix) {
  return matrix->sz * matrix->w * matrix->h;
}

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

Matrix* matrix_clone(Matrix* orig) {
  Matrix* new_matrix;
  new_matrix = matrix_alloc(orig->w, orig->h, orig->sz);
  memcpy(new_matrix->elements, orig->elements, matrix_element_len_bytes(orig));
  return new_matrix;
}

void matrix_free(Matrix* matrix) {
  free(matrix->elements);
  free(matrix);
}

#endif
