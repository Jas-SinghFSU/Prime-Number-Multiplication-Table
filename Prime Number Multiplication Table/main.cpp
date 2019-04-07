//
//  main.cpp
//  Prime Number Multiplication Table
//
//  Created by Jaskiratpal Singh on 4/6/19.
//  Funding Circle Code Challenge - A project that prints out the multiplication table of the first n prime numbers
//

#include <iostream>
#include <vector>
#include <cmath>
#include "PrimesTable.h"
#include "TestTenPrimes.h"

int main(int argc, const char * argv[]) {
    
    int totalPrimesWanted = 10;
    
    PrimesTable primeSet1(totalPrimesWanted);
    primeSet1.DisplayTable();
    
    TestTenPrimes testVariable;
    testVariable.RunTest();
    
    //primeSet1.GenerateMorePrimes(5); //Uncomment to generate 5 addition prime numbers
    //primeSet1.DisplayTable(); //Uncomment to display with the new N prime values
    
    return 0;
}
