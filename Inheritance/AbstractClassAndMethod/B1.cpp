#include <iostream>
#include "B1.h"
#include "C1.h"
#include "C2.h"
using namespace std;

void B1::setInfo(string info)
{
    name = info;
}

void B1::add(A &data)
{
    cout << "adding" << endl;
    B1 *b1ptr = dynamic_cast<B1 *>(&data);
    b1ptr->next = this->next;
    this->next = &data;
}

void B1::print()
{
    cout << "printing B1" << name << endl;
}

bool B1::operator<(const A &rhs) const
{
    const B1 *b1ptr = dynamic_cast<const B1 *>(&rhs);
    return name < b1ptr->name;
}