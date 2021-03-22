#pragma once
#include <iostream>
#include "B2.h"

using namespace std;

class C2  : public B2
{

public:

    void setInfo(int info);
    void print();
    
    bool operator==(const A &rhs) const;
    bool operator<(const A &rhs) const;

}; // end of A class