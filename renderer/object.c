#include "object.h"

void update_object(Object *o, Scalar delta)
{
    o->S = sum_vec(o->S, scale_vec(o->p, delta/o->m));
    o->p = sum_vec(o->p, scale_vec(o->F(o), delta));
}
