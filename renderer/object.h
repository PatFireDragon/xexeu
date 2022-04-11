#ifndef OBJECT_H_
#define OBJECT_H_

#include "vector.h"

typedef struct Object Object;

typedef struct Object {
    Scalar m;
    Vector S, p;

    Vector (*F)(Object const *);
} Object;


void update_object(Object *, Scalar);

#endif
