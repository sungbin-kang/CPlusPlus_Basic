#include <stdexcept>
#include <string>

using namespace std;

class TargetNotFoundException : public exception
{

public:

    TargetNotFoundException(const string &message = "")
        : exception("Target not found: " + message.c_str())
    {
    } // end constructor

};    // end TargetNotFoundException


/*

The below statement invokes TargetNotFoundException().
    throw TargetNotFoundException (target + " not found in a box!");

The below catch block can access the message.
    catch(TargetNotFoundException except) 
        {
        cout << except.what() << endl; 
        }

*/