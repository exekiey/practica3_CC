#include "one.h"
#include "projection.h"
#include "successor.h"

int One::evaluate(int x) {
    count++;
    int zero = Zero::evaluate(x);
    return Successor::evaluate(zero);
}