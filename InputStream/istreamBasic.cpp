#include <iostream>
#include <string>

using namespace std;
class MyClass{

    int x;

    public:
    friend istream &operator>>(istream &input, MyClass &myclass)
    {

        input >> myclass.x;
        
        return input;
    }

    friend ostream &operator<<(ostream &output, const MyClass &myclass)
    {
        string s = to_string(myclass.x);
        output << s;
        return output;
    }

};

int main()
{
    MyClass a;
    cin >> a;

    cout << "a = " << a <<  endl;
}