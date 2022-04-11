#ifndef VECTOR_H_
#define VECTOR_H_

typedef double Scalar;

typedef struct Vector {
  Scalar x, y;
} Vector;

Vector sum_vec(Vector, Vector);

Vector sub_vec(Vector, Vector);
Vector neg_vec(Vector);

Scalar mod_vec(Vector);
Vector unit_vec(Vector);

Vector scale_vec(Vector, Scalar);

Scalar iprod_vetor(Vector, Vector);
Scalar cprod_vetor(Vector, Vector);

void print_vec(Vector);

#define VECTOR(__x, __y) \
  ((Vector) { \
    .x = (__x), \
    .y = (__y), \
  })

#define VECTOR_ZERO \
  ((Vector) { \
    .x = 0, \
    .y = 0, \
  })

#endif
