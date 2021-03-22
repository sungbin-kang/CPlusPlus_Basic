#pragma once
#include <iostream>

using namespace std;

class A
{
public:
    A();
    A(string n);
    virtual ~A();

protected:
    string name;
};