//
//  PrimesTable.hpp
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//

#ifndef PrimesTable_h
#define PrimesTable_h

#include <iomanip>
#include "Primes.h"

class PrimesTable: public Primes //This class simply displays the table of N prime numbers
{
public:
    int ProductOfPrimeAt(int, int);
    void DisplayTable();
    PrimesTable();
    PrimesTable(int);
};

#endif /* PrimesTable_h */
