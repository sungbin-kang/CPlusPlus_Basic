/*
 * RulesOfthree.h
 *
 * Created by Michael Stiber; modified on 2/14/14
 */

#pragma once

#include <string>

using namespace std;

class RulesOfthree
{
public:
    RulesOfthree(void);

    // Copy constructor
    RulesOfthree(const RulesOfthree& orig);

    ~RulesOfthree(void);

    // Assignment operator
    RulesOfthree& operator=(const RulesOfthree& rhs);

    // Mutators and accessors
    void setI(int newI);
    void setD(double newD);
    void setS(string newS);
    void setIp(int newIp);

    int getI(void) const;
    double getD(void) const;
    string getS(void) const;
    int getIp(void) const;

private:
    // A couple useful utility functions
    void copy(const RulesOfthree& other);
    void clear(void);

    // An assortment of test members
    int i;    // primitive
    double d; // primitive
    string s; // object

    int* ip;  // primitive
};

