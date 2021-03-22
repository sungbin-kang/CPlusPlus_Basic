class C
{
public:
    int x;
    int y;

    C() : x(0), y(0) // Initializers
                     // This comes in before the constructor body 
                     // gets called.
    {
    }

    void foo() const // The implicit "this" pointer is const-qualified.
                     // The members of this object is not modifiable.
    {
        x = 42; // ERROR:
                // intt C::x
                // expression must be a modifiable lvalueC/C++(137)

    }

    void foo() // The implicit "this" pointer is NOT const-qualified.
               // The members of this object is modifiable.
    {
        x = 42; // OK!
    }

    void foo(C& obj)
    {
        obj.x = 42; // OK!
                    // obj is a reference to non-const.
    }

    void foo(const C& obj)
    {
        obj.x = 42; // ERROR:
                    // obj is reference to const.

        int a = obj.x; // OK!
        // The purpose of this parameter is to have access to the
        // member of the obejct.
        // But as it is declared as const, the original cannot be modified.
    }

    void foo(int a, int &b, const int& c)
    {
        a = 0;
        // a is passed by value.
        // Any change of the value will not affect the variable passed 
        // as an argument outside of this method.

        b = 0;
        // b is passed by reference.
        // Any chaged of the value will affect the variable,
        // when returned outside of this method.

        c = 0; // ERROR:
               // Any chage cannot be made. c is a constant.
    }

}; // end C
