#include <iostream>
#include "A.h"
#include "B1.h"
#include "B2.h"
#include "C1.h"
#include "C2.h"

using namespace std;

int main()
{

    // ----- Adding child classes -----

    // B1 add
    B1 *b1ptr1 = new B1();
    b1ptr1->setInfo("1");

    B1 *b1ptr2 = new B1();
    b1ptr2->setInfo("2");

    b1ptr1->add(*b1ptr2); // links b1ptr1 to b1ptr2

    // B2 add
    B2 *b2ptr1 = new C1();
    b2ptr1->setInfo(101);

    B2 *b2ptr2 = new C2();
    b2ptr2->setInfo(201);

    b2ptr1->add(*b2ptr2); // links b2ptr1 to b2ptr2

    // B2 add the number
    B2 *b2ptr3 = new C1();
    b2ptr3->setInfo(101);

    b2ptr1->add(*b2ptr3); // increment b2ptr1 by 1

    // ----- Comparing child classes -----
    B2 *c1ptr1 = new C1();
    c1ptr1->setInfo(101);

    B2 *c1ptr2 = new C1();
    c1ptr2->setInfo(102);

    // *c1ptr1 < *c1ptr2 ? cout << " 101 is smaller than 102" << endl : cout << "error!" << endl;

    B2 *c2ptr1 = new C2();
    c2ptr1->setInfo(201);

    // *c1ptr1 < *c2ptr1 ? cout << " C1 is smaller than C2" << endl : cout << "error!" << endl;

    return 0;
}