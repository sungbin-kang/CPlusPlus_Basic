#include <climits>
#include <iostream>

using namespace std;

void throwException(long num)
{
    try
    {
        if (num > INT_MAX || num < INT_MIN)
        {
            throw num;
        }
    }
    catch (long num)
    {
        cout << "EXCTP" << endl;
    }
}

void throwException2(long num)
{
    if (num > INT_MAX || num < INT_MIN)
    {
        throw ;
    }
}

int main()
{
    throwException(INT_MIN);
    throwException2(INT_MIN);
    return 0;
}