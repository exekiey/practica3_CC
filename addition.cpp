#include "addition.h"
#include "projection.h"
#include "successor.h"

int Addition::evaluate(const int x, const int y) {
    count++;
    if (y == 0) {
        return Projection::evaluate(0, x);
    }
    int new_y = y - 1; //s(y)

    int projection = Projection::evaluate(2, x, y, Addition::evaluate(x, new_y));
    return Successor::evaluate(projection);
}