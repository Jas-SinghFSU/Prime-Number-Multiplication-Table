//
//  Primes.h
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//

#ifndef Primes_h
#define Primes_h

#include <iostream>
#include <vector>
#include <cmath>

class Primes{ //This class simply generates prime numbers + other minor functionality
protected:
    int totalNumberOfPrimes;
    std::vector<int> primeNumbers;
    void GeneratePrimes();
    
public:
    Primes();
    Primes(int);
    int NumberOfPrimes();
    int PrimeAt(int);
    void GenerateMorePrimes(int);
    void DisplayAllPrimes();
};

#endif /* Primes_h */
