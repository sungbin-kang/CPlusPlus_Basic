// run the program: 
// ./istreamGetAndEOF < test.txt

#include <iostream>
#include <queue>

using namespace std;

class MyClass
{
    queue<string> a;

public:
    friend istream &operator>>(istream &input, MyClass &myclass)
    {

        int i = 0;
        string str = "";
        char ch;

        while (!input.eof())
        {
            ch = tolower(input.get());
            if (islower(ch) || ch == '\'')
            {
                str += ch;
            }
            else // space, number, special character
            {
                myclass.a.push(str);
                str = "";
            }
        }

        return input;
    }

    friend ostream &operator<<(ostream &output, MyClass &myclass)
    {

        while (!myclass.a.empty())
        {
            output << myclass.a.front() << endl;
            myclass.a.pop();
        }

        return output;
    }
};

int main()
{
    MyClass myClass;

    cin >> myClass;
    cout << myClass;

    return 0;
}

