class One : public FPR {
    T evaluate(Args... args) override {
        int zero = zero.evaluate(args[0]);
        return succesor.evaluate(zero);

    }
};