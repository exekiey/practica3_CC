#ifndef PROJECTION_H
#define PROJECTION_H

#include "fpr.h"

class Projection : public FPR {
public:
    template<typename... Args>
    static int evaluate(int index, Args... args);
};

#include "projection.tpp"

#endif