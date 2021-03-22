#pragma once
#include <iostream>
#include "B.h"

using namespace std;

class C : public B
{
public:
    C();
    C(string n);
    ~C();

    /*
    If,
        class A: {... ~A(); ...}

    instead of,
        class A: { ... virtual ~A(); ... }

    then,
        Destryoing cp.
        Inside ~A: :A() for object cp

    instead of,
        Destryoing cp.
        Inside ~C::C() for object cp
        Inside ~B::B() for object cp
        Inside ~A::A() for object cp

    */
};