#include <iostream>
#include <array>
#include <list>

using namespace std;

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6};

    // Method 1 : Counting element by element
    int count = 0;
    for (auto i : a)
    {
        count++;
    }
    cout << count << endl;


    // Method 2 : Using pointers
    cout << ( end(a) - begin(a) ) << endl;


    // Method 3 : Using sizeof()
    cout << sizeof(a)/sizeof(a[0]) << endl;


    // Method 4 : Using poinsters to find length of the array
    int len = *(&a + 1) - a;
    //*(&arr + 1) is the address of the next memory location
    // just after the last element of the array
    cout << len << endl;


    // Method 5 : Using array size() in STL
    array<int,6> arr = { 1, 2, 3, 4, 5, 6};
    cout << arr.size() << endl;


    return 0;

}