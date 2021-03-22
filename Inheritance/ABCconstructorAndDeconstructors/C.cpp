#include <iostream>
#include "C.h"

C::C()
{
    A();
    name = "unnamed C.";
    cout << "Inside C::C() for object " << name << endl;
}
/*
Creating an unnamed C.
Inside A::A() for object unnamed A.
Inside B::B() for object unnamed B.
Inside C::C() for object unnamed C.
*/

// Without explicitly calling constructor A and B,
// the compiler will call them.

C::C(string n) : B(n)
{
    cout << "Inside C::C(string) for object " << name << endl;
}
/*
Dynamically allocating bp.
Inside A::A(string) for object cp
Inside B::B(string) for object cp
Inside C::C(string) for object cp
*/


C::~C()
{
    cout << "Inside ~C::C() for object " << name << endl;
}
/*
Destryoing cp.
Inside ~C::C() for object cp
Inside ~B::B() for object cp
Inside ~A::A() for object cp
*/



/*
Inside ~C::C() for object unnamed C.
Inside ~B::B() for object unnamed C.
Inside ~A::A() for object unnamed C.
*/