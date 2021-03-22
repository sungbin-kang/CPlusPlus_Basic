#pragma once
#include <iostream>
#include "A.h"
using namespace std;

class B1 : public A
{
protected:
    string name; 

public:

    void setInfo(string info);
    void print();

    void add(A &data);
    bool operator<(const A &rhs) const;

}; // end of A class