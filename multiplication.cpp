#include "projection.h"
#include "addition.h"
#include "zero.h"
#include "multiplication.h"

int Multiplication::evaluate(const int x, const int y) {
    count++;
    if (y == 0) {
        return Zero::evaluate(x);
    }
    int new_y = y - 1; //s(y)

    int projection = Projection::evaluate(2, x, y, Multiplication::evaluate(x, new_y));
    return Addition::evaluate(x, projection);
}