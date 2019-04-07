//
//  TestTenPrimes.h
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//
#include <iostream>
#include "PrimesTable.h"

#ifndef TestTenPrimes_h
#define TestTenPrimes_h

class TestTenPrimes{
private:
    PrimesTable testValues; //The values we're going to test against in the test cases;
public:
    TestTenPrimes(); 
    void RunTest();
};
#endif /* TestTenPrimes_h */
