#ifndef FPR_H
#define FPR_H

class FPR {
protected:
    static int count;

public:
    static int getCount();
    virtual ~FPR() = default;
};

#endif