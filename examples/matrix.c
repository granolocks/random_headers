#include <stdio.h>
#include "../matrix.h"

void matrix_print(Matrix* matrix) {
  printf("Matrix: %zux%zu\n", matrix->w, matrix->h);
}

void map_fn_float(Matrix* matrix, size_t id, float* el) {
  printf("%f ", *el);
}

int main() {
  Matrix* foo = MATRIX(3, 1, float);

  printf("The original matrix:\n");
  matrix_print(foo);

  float x = MATRIX_GET(foo, float, 0, 0);
  printf("X (before set): %f\n", x);

  MATRIX_SET(foo, float, 1,0, 3.14);

  x = MATRIX_GET(foo, float, 1,0);
  printf("X (after set): %f\n", x);

  MATRIX_MAP(foo, float, map_fn_float);
  printf("\n");

  printf("The cloned matrix:\n");
  Matrix* bar = matrix_clone(foo);
  matrix_print(bar);
  MATRIX_SET(bar, float, 2,0, 42.0);
  MATRIX_MAP(bar, float, map_fn_float);
  printf("\n");

  matrix_free(foo);
  matrix_free(bar);

  return 0;
}
