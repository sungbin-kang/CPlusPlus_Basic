#pragma once
#include <iostream>
#include "A.h"
using namespace std;

class B2 : public A
{
protected:
    int num; 

public:
    virtual void setInfo(int info) = 0;
    virtual void print() = 0;

    void add(A &data);
    virtual bool operator==(const A &rhs) const = 0;
    virtual bool operator<(const A &rhs) const = 0;

}; // end of A class