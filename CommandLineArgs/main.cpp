#include <iostream>

using namespace std;

int main(int argc, char** argv) 
{ 
    cout << "You have entered " << argc // argr : # number of arguments
         << " arguments:" << "\n"; 
  
    for (int i = 0; i < argc; ++i) 
        cout << argv[i] << "\n";        // argv: vector
  
    return 0; 
} 

// argc : int and stores number of command-line arguments passed by the user including the name of the program.

// argv : array of character pointers listing all the arguments.


/*

----- INPUT ------
$ g++ mainreturn.cpp -o main 
$ ./main geeks for geeks

----- OUTPUT ------
You have entered 4 arguments:
./main
geeks
for
geeks

*/