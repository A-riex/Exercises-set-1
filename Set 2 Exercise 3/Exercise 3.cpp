/***************************************************************************
 * TNG033: set of exercises 2                                               *
 * Exercise 3                                                               *
 * **************************************************************************/

#include <iostream>

class AA {
public:
    explicit AA(int n) : _i{ n } {
    }

    void foo1(const AA* p)const {
        std::cout << _i + p->_i << '\n';
    }

    AA foo2(const AA& a) const {
        return AA(_i + a._i);
    }

    AA& half() {
        _i /= 2;
        return *this;
    }

    friend std::ostream& operator<< (std::ostream& os, const AA& a);


private:
    int _i;
};

int main() {

    int i = 2;

    AA a1{ 5 };
    AA a2{ 10 };
    const AA a3{ 66 };
    AA a4{ 16 };

    a1.foo1(&a2);
    a1.foo1(&a3);  // error since we declare a3 a const
    a3.foo1(&a3);
    a1 = a3.foo2(a3);
    a3.foo2(a3) = a1;
    // a1 = i;     // cannot run since explicit
    a4.half().half().half();

}
