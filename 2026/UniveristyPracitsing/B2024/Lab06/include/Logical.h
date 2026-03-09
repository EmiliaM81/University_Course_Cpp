#pragma once

#include <iostream>

class TwoArg {

    public: 
        virtual bool result(bool val1, bool val2) const = 0;
        virtual ~TwoArg() = default;
};

class OneArg {

    public: 
        virtual bool result(bool val) const = 0;
        virtual ~OneArg() = default;
};

class NOT: public OneArg {
    public:
        bool result(bool val) const {
            return !val;
        }
};

class OR: public TwoArg {
    public: 
        bool result(bool val1, bool val2) const override {
            return val1 || val2;
        }
};


class AND: public TwoArg {
    public:
        bool result(bool val1, bool val2) const override {
            return val1 && val2;
        }

       
};

class XOR: public TwoArg {
    public: 
        bool result(bool val1, bool val2) const override {
            return !(val1 && val2);
        }
};

class Logical
{

    public:
        static bool eval(const OneArg& op, bool val);
        static bool eval(const TwoArg& op, bool val1, bool val2);

};

bool Logical::eval(const OneArg& op, bool val)
{
    return op.result(val);
}

bool Logical::eval(const TwoArg& op, bool val1, bool val2)
{
    return op.result(val1, val2);
}
