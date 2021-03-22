//---------------------------------------------------------------------------
/**
 * Header of ABC class.
 * 
 * 
 * @file ABC.h
 * @author Sungbin Kang
 * @version 0
 */
#pragma once
#include <iostream>

using namespace std;

class ABC
{

public:
    //-----------------------------[ PUBLIC ]--------------------------------
    //-------------------------- Constructor --------------------------------
    /** 
     * Constructor does this
     * 
     * @pre     
     * @post    
     */
    ABC();

    //-------------------------- Copy Constructor ----------------------------
    /** 
     * Copy Constructor does this
     * 
     * @pre     
     * @post    
     * 
     * @param   orig    
     */
    ABC(const ABC &orig);

    //-------------------------- Destructor ----------------------------------
    /** 
     * Destructor does this
     * 
     * @pre     
     * @post    
     */
    ~ABC();

    //-------------------------- My Method -----------------------------------
    /** 
     * My Method does this 
     * 
     * @pre     
     * @post    
     * 
     * @param   a   
     * @return  
     */
    void myMethod(int a);

private:
    //------------------------------[ PRIVATE ]-------------------------------
    //--------------------------- Data Memeber x -----------------------------
    /**
     * Data member x represents this.
     */
    int x;

}; // end of class ABC
   //-------------------------------------------------------------------------
