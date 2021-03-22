#include <iostream>
#include "C2.h"

void C2::setInfo(int info)
{
    num = info;
}

void C2::print()
{
    cout << " printing : " << num << endl;
}

bool C2::operator==(const A &rhs) const
{
    const C2 *c2ptr = dynamic_cast<const C2 *>(&rhs);
    if (!c2ptr)
    {
        return false;
    }
    return num == c2ptr->num;
}

bool C2::operator<(const A &rhs) const
{
    const C2 *c2ptr = dynamic_cast<const C2 *>(&rhs);
    if (!c2ptr)
    {
        return false;
    }

    cout << "they are both C2 " << endl;
    return this->num < c2ptr->num;
}
