#include <stdio.h>
#include "../matrix.h"

MATRIX_ADDER(matrix_addf,float)

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

  Matrix* m_f_1 = MATRIX(3, 3, float);

  MATRIX_SET(m_f_1, float, 0, 0, 1.0);
  MATRIX_SET(m_f_1, float, 0, 1, 1.0);
  MATRIX_SET(m_f_1, float, 0, 2, 1.0);
  MATRIX_SET(m_f_1, float, 1, 0, 1.0);
  MATRIX_SET(m_f_1, float, 1, 1, 1.0);
  MATRIX_SET(m_f_1, float, 1, 2, 1.0);
  MATRIX_SET(m_f_1, float, 2, 0, 1.0);
  MATRIX_SET(m_f_1, float, 2, 1, 1.0);
  MATRIX_SET(m_f_1, float, 2, 2, 1.0);

  Matrix* m_f_2 = MATRIX(3, 3, float);
  MATRIX_SET(m_f_2, float, 0, 0, 1.0);
  MATRIX_SET(m_f_2, float, 0, 1, 2.0);
  MATRIX_SET(m_f_2, float, 0, 2, 3.0);
  MATRIX_SET(m_f_2, float, 1, 0, 4.0);
  MATRIX_SET(m_f_2, float, 1, 1, 5.0);
  MATRIX_SET(m_f_2, float, 1, 2, 6.0);
  MATRIX_SET(m_f_2, float, 2, 0, 7.0);
  MATRIX_SET(m_f_2, float, 2, 1, 8.0);
  MATRIX_SET(m_f_2, float, 2, 2, 9.0);

  printf("m_f_1 before matrix_addf\n");
  MATRIX_MAP(m_f_1, float, map_fn_float);
  printf("\n");

  matrix_addf(m_f_1, m_f_2);

  printf("m_f_1 after matrix_addf\n");
  MATRIX_MAP(m_f_1, float, map_fn_float);
  printf("\n");

  matrix_free(m_f_1);
  matrix_free(m_f_2);

  return 0;
}
