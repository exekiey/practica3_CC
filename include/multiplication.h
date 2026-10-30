#ifndef MULTIPLICATION_H
#define MULTIPLICATION_H

#include "fpr.h"
#include "zero.h"

class Multiplication : public FPR {
public:
    static int evaluate(const int x, const int y);
};

#endif