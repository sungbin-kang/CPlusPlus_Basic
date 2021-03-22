
#include <iostream>
using namespace std;

class Test
{
    int x;

public:
    // pure virtual functions make a class abstract
    virtual void show() = 0;
    int getX() { return x; }
};

int main(void)
{
    Test t;
    // ERROR:
    // object of abstract class type "Test" is not allowed: -- function
    // "Test::show" is a pure virtual function

    // Pure abstract method needs to be override.
    return 0;
}

/*
1) A class is abstract if it has at least one pure virtual function.
2) We can have pointers and references of abstract class type.
    EX)
        Base *bp = new Derive();
        bp->show();
3) If we do not override the pure virtual function in derived class, then derived class also becomes abstract class.
4) An abstract class can have constructors.
    usage EX)
        public: 
            Derived(int i, int j):Base(i) { y = j; } 

*/