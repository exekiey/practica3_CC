class Proyection : public FPR {
    T evaluate(Args... args) override {
        int index = args[1];
        return args[index];
    }
};