#include <iostream>
using namespace std;

int main()
{
    int x = -1;

    cout << "Before try Things will happend here.\n";
    try
    {
        cout << "Inside try: Give a statement that might throw an exception. \n";
        if (x < 0)
        {
            throw x;
            cout << "After throw (Never executed) \n";
            // After throw, no statement will be executed.
        }
    }
    // Uncaught Exceptions
    catch (char x)  { // char x : catch block parameter
        cout << "Character Caught " << x;
        // Won't be thrown, because x is not a character
        // Implicit typecast will not work for catch 
    }
    // Multiple catch blocks
    catch (int x)
    {
        cout << "Int Exception Caught \n";
    }

    cout << "After catch (Will be executed) \n";
    
    /*
    Before try 
    Inside try 
    Exception Caught 
    After catch (Will be executed)  
    */



    return 0;
}


/*

2) There is a special catch block called ‘catch all’ catch(…) that can be used to catch all types of exceptions.
    EX)
        try {
            throw 10;
        }
        catch (char *excp) {
            cout << "Caught " << excp;
        }
        catch (...) {
            cout << "Default Exception\n";
        }

3) Implicit type conversion doesn’t happen for primitive types.

4) If an exception is thrown and not caught anywhere, the program terminates abnormally. 
    EX)
        try  {
        throw 'a';
        }
        catch (int x)  {
            cout << "Caught ";
        }
    // terminate called after throwing an instance of 'char'

5) A derived class exception should be caught before a base class exception. 

6) Like Java, C++ library has a standard exception class which is base class for all standard exceptions. 

7) Unlike Java, in C++, all exceptions are unchecked. Compiler doesn’t check whether an exception is caught or not 

8) In C++, try-catch blocks can be nested. Also, an exception can be re-thrown using “throw; ” 
    EX)
        try {
            try {
                throw 20;
            }
            catch (int n) {
                cout << "Handle Partially ";
                throw; // Re-throwing an exception
            }
        }
        catch (int n) {
            cout << "Handle remaining ";
        }

9) When an exception is thrown, all objects created inside the enclosing try block are destructed before the control is transferred to catch block.



*/