#include <iostream>
#include "B2.h"
#include "C1.h"
#include "C2.h"
using namespace std;

void B2::add(A &data)
{
    B2 *b2ptr = dynamic_cast<B2 *>(&data);
    if (*this == *b2ptr)
    {
        num++;
    }
    b2ptr->next = next;
    next = b2ptr;
}