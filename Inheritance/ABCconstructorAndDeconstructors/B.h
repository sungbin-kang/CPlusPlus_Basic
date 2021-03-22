#pragma once
#include <iostream>
#include "A.h"

using namespace std;

class B : public A
{
public:
    B();
    B(string n);
    virtual ~B();

};