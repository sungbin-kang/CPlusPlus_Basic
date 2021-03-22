#include <iostream>

using namespace std;

class InputClass
{
    public:
    InputClass(char *argument)
    {
        cout << "String input class " << argument << " created!" << endl;
    }

    InputClass(float num)
    {
        cout << "Float input class with float argument " << num << " created!" << endl;
    }
};

int main(int argc, char** argv) 
{ 

    InputClass ic = InputClass(argv[1]);

    InputClass ic2 = InputClass(stof(argv[2]));

}