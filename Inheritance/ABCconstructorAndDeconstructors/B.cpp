#include "B.h"

B::B()
{
    name = "unnamed B.";
    cout << "Inside B::B() for object " << name << endl;
}

/*
B::B(string n) : name(n) // ERROR: "name" is not a nonstatic data member or base class of class "B"
{
    cout << "Inside B::B(string) for object " << name << endl;
}

// Because outside of the body block, constructor A has not been 
// called yet. Meaning, variable name is not declared anywhere yet. 
// To be able to access the variable "name", base class A's 
// constructor must be called.
*/

/*

B::B(string n)
{
    name = n;
    cout << "Inside B::B(string) for object " << name << endl;
}

Dynamically allocating bp.
Inside A::A() for object unnamed A.
Inside B::B(string) for object bp

// This constructor will have an access to modify A's protected 
// data members but not preciously what we want. It will only call 
// the default constructor A() instead of A(string) constructor. 
// In this case we would want to do the similar thing as A(string).
*/

/*
B::B(string n) 
{
    A();
    cout << "Inside B::B(string) for object " << name << endl;
}
Dynamically allocating bp.
Inside A::A() for object unnamed A.
Inside A::A() for object unnamed A.
Inside ~A::A() for object unnamed A.
Inside B::B(string) for object unnamed A.

// This constructor will call A() twice. and ~A() at the end of
// dynamic allocation of B.
*/


B::B(string n) : A(n)
{
    cout << "Inside B::B(string) for object " << name << endl;
}
// Dynamically allocating bp.
// Inside A::A(string) for object bp
// Inside B::B(string) for object bp

B::~B()
{
    cout << "Inside ~B::B() for object " << name << endl;
}