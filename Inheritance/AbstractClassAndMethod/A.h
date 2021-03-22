#pragma once
#include <iostream>

using namespace std;

class A
{
protected:
    A *next;

public:
    virtual void print() = 0;

    virtual void add(A &data) = 0;
    virtual bool operator<(const A &rhs) const = 0;

}; // end of A class