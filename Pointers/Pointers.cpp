#include <iostream>
// #include "PointerStuff.h"

using namespace std;

// // Takes in a function type and a number double,
// // and it calls that function on the double,
// // and outputs that.
// void funcPrinter(functionType f, double d) {
//     cout << "The function output is  " << f(d) << endl;
// }

int main () {

    int var = 10;
    int *ip;

    ip = &var;

    cout << "Value of var is " << var << endl;
    cout << "Memory address of var is " << ip << endl;
    // value at the address available in the pointer variable
    cout << "Value of *ip is " << *ip << endl;


    var = 20;
    cout << "Value of var is " << var << endl;
    cout << "Memory address of var is " << ip << endl;
    cout << "Value of *ip is " << *ip << endl << endl;
    // After reassigning the value of var, only the value of var changes,
    // and memory address stays the same. 



    int *ip2, *ip3;
    ip2 = &var;
    ip3 = &var;
    cout << ip2 << " " << ip3 << endl << endl;

    char s[20];
    char *cp;

    strcpy(s, "Hello"); // C string are now null '\0' terminated.
    // copying string hello to array s.
    cout << "Our test string is s: " << s << endl;

    for (int k=0; k<strlen(s); k++) {
        cout << "\ts[" << k << "] = '"  << s[k] << "'" << endl;
    }

    cout << endl;

    cp = s;
    while (*cp != '\0') {
        cout<< "\ns = " << s << "\ncp = " << cp << "\n*cp = " << *cp << endl;
        cp++;
    }

    
    char iArray[10] = "Hi";

    for (int k=0; k < strlen(iArray); k++) {
        cout << iArray[k] << endl;
    }


    // funcPrinter(circumference, 3.0);

    
}