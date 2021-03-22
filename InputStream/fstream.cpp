// ios::eof example
#include <iostream> // std::cout
#include <fstream>  // std::ifstream

using namespace std;

int main()
{

    ifstream is("test.txt"); // open file

    char c;
    while (is.get(c)) // loop getting single characters
        cout << c;

    if (is.eof()) // check for EOF
        cout << "[EoF reached]\n";
    else
        cout << "[error reading]\n";

    is.close(); // close file

    return 0;
}