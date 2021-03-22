#include <string>
#include <sstream>

using namespace std;

int main()
{
    // METHOD 1
    int a = 10;
    string str = to_string(a);

    // METHOD 2
    int a = 10;
    stringstream ss;
    ss << a;
    string str = ss.str();
}