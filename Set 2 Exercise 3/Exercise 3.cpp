/***************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 3                                                               *
 * **************************************************************************/

#include <iostream>

class AA {
public:
    AA(int n) : _i{ n } {
    }

    void foo1(AA* p) {
        std::cout << _i + p->_i << '\n';
    }

    AA foo2(AA& a) {
        return AA(_i + a._i);
    }

private:
    int _i;
};

int main() {
    AA a1{ 5 };
    AA a2{ 10 };
    const AA a3{ 66 };
    AA a4{ 16 };

    a1.foo1(&a2);
}
