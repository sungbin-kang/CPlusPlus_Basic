/*
 * CopyAssignTest
 *
 * Created by Michael Stiber; modified on 2/14/14
 */

#include <iostream>
#include "RulesOfthree.h"

using namespace std;

int main(int argc, char** argv)
{
    RulesOfthree m1;

    m1.setD(3.14159);
    m1.setI(42);
    m1.setS("This is a test");
    m1.setIp(7);

    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;

    // Making a new my class object and
    // using copying consttructor
    RulesOfthree m2(m1);
    RulesOfthree m3 = m1;

    cout << "m2 values:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;
    cout << "m3 values:" << endl;
    cout << '\t' << m3.getD() << ", " << m3.getI() << ", " << m3.getS() 
         << ", " << m3.getIp() << endl;

    m2.setD(1.7172);
    m2.setI(100);
    m2.setS("This is a NEW test");
    m2.setIp(8);

    m1 = m2;
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;

    m2.setIp(23);
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;
    cout << "m2 values; last should be different:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;

    return 0;
}
