#include <iostream>
#include "A.h"
#include "B.h"
#include "C.h"

using namespace std;

int main()
{
    {
        cout << "-------BEGIN-------" << endl;
       
        cout << "" << endl;
        cout << "Creating an unnamed A." << endl;
        A a;

        cout << "" << endl;
        cout << "Creating an unnamed B." << endl;
        B b;

        cout << "" << endl;
        cout << "Creating an unnamed C." << endl;
        C c;


        // Dynamic binding / polymorphic
        // Can be used for regular functions.

        cout << "" << endl;
        cout << "Dynamically allocating ap." << endl;
        A *ap = new A("ap");


        cout << "" << endl;
        cout << "Dynamically allocating bp." << endl;
        A *bp = new B("bp");

        cout << "" << endl;
        cout << "Dynamically allocating cp." << endl;
        A *cp = new C("cp");


        cout << "" << endl;
        cout << "Destryoing ap." << endl;
        delete ap;

        cout << "" << endl;
        cout << "Destryoing bp." << endl;
        delete bp;

        cout << "" << endl;
        cout << "Destryoing cp." << endl;
        delete cp;


        cout << "" << endl;
        cout << "--------END--------" << endl;

    }


    return 0;
}


/*

----Kinds of Inheritance----

1. Public inheritance: Public and protected members of the base class remain, respec- tively, public and protected members of the derived class.
    is-a relationship

2. Protected inheritance: Public and protected members of the base class are protected members of the derived class.
    as-a relationship

3. Private inheritance: Public and protected members of the base class are private mem- bers of the derived class.
    has-a relationship -> containment

*/


/* 

----Key points about virtual methods----

1. A virtual method is one that a derived class can override.

2. You must implement a class’s virtual methods. (Pure virtual methods are not included in this requirement.)

3. A derived class does not need to override an existing implementation of an inherited virtual method.

4. Any of a class’s methods may be virtual. However, if you do not want a derived class to override a particular method, the method should not be virtual.

5. Constructors cannot be virtual.

6. Destructors can and should be virtual. Virtual destructors ensure that future descendants of the object can deallocate themselves correctly.

7. A virtual method’s return type cannot be overridden.

*/


/*

----Abstract base class----

1. By definition is a class that contains at least one pure virtual method.
2. 
Is used only as the basis for derived classes and thus defines a minimum interface for its descendants.

3. Has no instances.

4. Should, in general, omit implementations except for the destructor and methods that provide access to private data members. That is, virtual methods in an abstract base class usually should be pure.

5. Must implement any virtual method that is not pure, thereby providing a default implementation if a derived class chooses not to supply its own.

*/