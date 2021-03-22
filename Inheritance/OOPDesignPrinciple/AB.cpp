#include <iostream>

using namespace std;

class A
{
public:
    A(int a) { numa = a; 
    }
    void testF() { f(); }
    void testH() { h(); }
    virtual void f() { cout << '1' << endl; }
    virtual void g() = 0;
    void h() { cout << '1' << endl; }

    virtual A &returnThis()
    {
        return *this;
    }

// protected:
    int numa;

    private:
    void testAPrivate(){}
};

class B : public A
{
public:
    B(int a, int b) : A(a) { numb = b; }
    virtual void f() { cout << '2' << endl; }
    virtual void g() { cout << '2' << endl; }
    void h() { cout << '2' << endl; }
    void testBPublic() {}

    virtual B &returnThis()
    {
    
        return *this;
    }

protected:
    int numb;

    private:
    void testBPrivate() {}
};

int main()
{
    B b(4, 5);
    A *aptr = &b;

    b.f();
    b.g();
    b.h();
    b.testF();
    b.testH();
    aptr->testF();
    aptr->testH();

    aptr->h();
    
    

    return 0;
}
