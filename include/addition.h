#ifndef ADDITION_H
#define ADDITION_H

#include "fpr.h"
#include "zero.h"

class Addition : public FPR {
public:
    static int evaluate(const int x, const int y);
};

#endif