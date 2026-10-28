class Succesor : public FPR {
    T evaluate(Args... args) override {
        return 1 + args[0];
    }
};