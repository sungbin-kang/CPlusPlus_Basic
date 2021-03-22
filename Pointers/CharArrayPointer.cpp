#include <iostream>

using namespace std;

int main()
{
    // // char *s = "Hello";
    // // same as char s[6] = "Hello"; // 5 characters + '/0' the terminal character
    // char s[6] = "Hello";
    // cout << s << endl; 
    // // Hello
    // cout << s[0] << endl;
    // // H

    // cout << *(s + 1) << endl;
    // // e

    // // s++;
    // // cout << s << endl;
    // // // ello

    // cout << s[1] << endl;
    // // l

    // // int *a = {1, 2, 3}; not valid
    // int a[3] = {1, 2, 3};
    // cout << a << endl; // 0x7ffee67de85c
    // cout << a[0] << endl; // 1
    // cout << *(a + 1) << endl; // 2


    int a[2];
    delete a;

    int *iArray;
    iArray = new int[2];
    delete iArray;



}