#include <iostream>
#include "C1.h"
#include "C2.h"

void C1::setInfo(int info)
{
    num = info;
}

void C1::print()
{
    cout << " printing : " << num << endl;
}

bool C1::operator==(const A &rhs) const
{
    const C1 *c1ptr = dynamic_cast<const C1 *>(&rhs);
    if (!c1ptr)
    {
        return false;
    }
    return num == c1ptr->num;
}

bool C1::operator<(const A &rhs) const
{
    const C1 *c1ptr = dynamic_cast<const C1 *>(&rhs);
    if (!c1ptr)
    {
        const C2 *c2ptr = dynamic_cast<const C2 *>(&rhs);
        if (c2ptr)
        {
            return true;
        }
    }

    cout << "they are both C1 " << endl;
    return this->num < c1ptr->num;
}
