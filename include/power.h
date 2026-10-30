#ifndef POWER_H
#define POWER_H

#include "fpr.h"
#include "zero.h"

class Power : public FPR {
public:
    static int evaluate(const int x, const int y);
};

#endif