#include "A.h"

A::A()
{
    name = "unnamed A.";
    cout << "Inside A::A() for object " << name << endl;
}

A::A(string n) : name(n)
{
    cout << "Inside A::A(string) for object " << name << endl;
}

A::~A()
{
    cout << "Inside ~A::A() for object " << name << endl;
}
