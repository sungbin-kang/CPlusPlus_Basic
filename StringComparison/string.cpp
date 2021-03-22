// string comparisons
#include <iostream>

using namespace std;

int main()
{
    string alpha = "alpha";
    string beta = "beta";

    if (alpha == beta)
        cout << "alpha and beta are equal\n";
    if (alpha != beta)
        cout << "alpha and beta are not equal\n";
    if (alpha < beta)
        cout << "alpha is less than beta\n";
    if (alpha > beta)
        cout << "alpha is greater than beta\n";
    if (alpha <= beta)
        cout << "alpha is less than or equal to beta\n";
    if (alpha >= beta)
        cout << "alpha is greater than or equal to beta\n";


    string aAb = "a'b";
    string a = "a";

    if (aAb < a)
        cout << "a'b is smaller than a" << endl;
    if (aAb > a)
        cout << "a'b is greater than a" << endl;

    return 0;
}