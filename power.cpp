#include "projection.h"
#include "power.h"
#include "one.h"
#include "multiplication.h"

int Power::evaluate(const int x, const int y) {
    count++;
    if (y == 0) {
        return One::evaluate(x);
    }

    int new_y = y - 1; //s(y)
    
    int projection = Projection::evaluate(2, x, y, Power::evaluate(x, new_y));
    return Multiplication::evaluate(x, projection);
}