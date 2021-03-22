/*
 * RulesOfthree.cpp
 *
 * Created by Michael Stiber; modified on 2/14/14
 */

#include "RulesOfthree.h"
#include <cassert>

using namespace std;


RulesOfthree::RulesOfthree(void) : i(0), d(0.0)
{
    ip = new int;
    *ip = 0;
}

// COPY CONSTRUCTOR*****************************
RulesOfthree::RulesOfthree(const RulesOfthree& orig) : ip(NULL)
{
    // Note that this is a new object; no dynamic memory has been allocated
    copy(orig);
}

// OVERLOADED ASSIGNMENT OPERATOR**************************************
RulesOfthree& RulesOfthree::operator=(const RulesOfthree& rhs)
{
    // One trick: a = a is a legal assignment, and shouldn't do anything
    if (this != &rhs)   // this is a pointer.
                        // If the this pointing address(left had object) is not 
                        // the same as right hand object address, 
                        // meaning they are two different objects, then
    {
      clear();
      copy(rhs);
      
    }
    return *this;       // Return the reference of this, the object.
}

// DECONSTRUCTOR**************************************
RulesOfthree::~RulesOfthree(void)
{
    clear();
}


void RulesOfthree::setI(int newI)
{
    i = newI;
}


void RulesOfthree::setD(double newD)
{
    d = newD;
}

void RulesOfthree::setS(string newS)
{
    s = newS;
}

void RulesOfthree::setIp(int newIp)
{
    *ip = newIp;
}

int RulesOfthree::getI(void) const
{
    return i;
}

double RulesOfthree::getD(void) const
{
    return d;
}

string RulesOfthree::getS(void) const
    {
    return s;
}

int RulesOfthree::getIp(void) const
    {
    return *ip;
}


// PRIVATE COPY METHOD **************************************
void RulesOfthree::copy(const RulesOfthree& other)
{
    i = other.i;
    d = other.d;
    s = other.s;

    assert(ip == NULL);     // asserting that there is no memeory leak.
    ip = new int;
    *ip = *(other.ip);
}


// PRIVATE CLEAR METHOD**************************************
void RulesOfthree::clear(void)
{
    i = 0;
    d = 0.0;
    s = "";

    assert(ip != NULL); // For debugging purpose,
                        // if ip is not null is false,
                        // meaning that make sure that ip is not null
    *ip = 0;
    delete ip;
    ip = NULL;
}
