#include "vector.h"

#include <math.h>
#include <stdio.h>

Vector sum_vec(Vector u, Vector v)
{
    Vector k;
    k.x = u.x + v.x;
    k.y = u.y + v.y;
    return k;
}

Vector neg_vec(Vector u)
{
    Vector k;
    k.x = -u.x;
    k.y = -u.y;
    return k;
}


Scalar mod_vec(Vector u)
{
    return sqrt(u.x * u.x + u.y * u.y);
}

Vector unit_vec(Vector u)
{
    return scale_vec(u, 1/(mod_vec(u)));
}


Vector scale_vec(Vector u, Scalar a)
{
    Vector k;
    k.x = u.x * a;
    k.y = u.y * a;
    return k;
}

Scalar iprod_vec(Vector u, Vector v)
{
    return u.x * v.x + u.y + v.y;    
}

Scalar cprod_Vector(Vector u, Vector v)
{
    return u.x * v.y - u.x * v.y;
}


void print_vec(Vector u)
{
    printf("{%g %g}", u.x, u.y);
}
