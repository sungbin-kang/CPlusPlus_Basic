#include <iostream>

using namespace std;

class C

{
public:
    int x;

    void f(int a)
    {
        x = a;
        cout << "f1: " << x << endl;
    }

    void f(unsigned a)
    // The correct way to overload void f(int a)
    // Keep the return type the same.
    // int and unsigned int are valid different types of signature.
    {
        x = a;
        cout << "f2: " << x << endl;
    }

    int f(unsigned a)
    // This will not get error(the error is showing becuase of the f2 function),
    // but is not a overloading function.
    {
        x = a;
        cout << "f3: " << x << endl;
        return x;
    }

    int f(int a)
    // ERROR: cannot overload functions distinguished by return type alone
    {
        x = a;
        cout << "f4: " << x << endl;
    }
};

int main()
{
    C c = C();
    c.f(10);
    unsigned a = 12;
    c.f(a);

    // f1: 10
    // f3: 12
    // when f2 is commented out.
}