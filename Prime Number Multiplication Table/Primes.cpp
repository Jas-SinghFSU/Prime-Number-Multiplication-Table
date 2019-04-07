//
//  Primes.cpp
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//  Copyright © 2019 Funding Circle Code Challenge. All rights reserved.
//

#include "Primes.h"

Primes::Primes()
{
    totalNumberOfPrimes = 5;
    GeneratePrimes();
}

Primes::Primes(int reqNumOfPrimes)
{
    totalNumberOfPrimes = reqNumOfPrimes;
    GeneratePrimes();
}

//GeneratePrimes() calculates the first N primes requested. It finds out if a value is prime by checking if its divisible by any value up to its square root.
//Time Complexity: O(n * sqrt(n)) where n is the total numbers visited to get the Kth prime.
void Primes::GeneratePrimes()
{
    for (int i = 2; primeNumbers.size() < totalNumberOfPrimes; i++)
    {
        bool isPrime = true;
        for(int j = 0; j <= sqrt(i); j++)
        {
            if (j != 0 && j != 1)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
        }
        if (isPrime)
        {
            primeNumbers.push_back(i);
        }
    }
}

void Primes::GenerateMorePrimes(int requestedValue)
{
    totalNumberOfPrimes += requestedValue;
    int valueOfLastPrime = primeNumbers.back();
    for (int i = valueOfLastPrime+1; primeNumbers.size() < totalNumberOfPrimes; i++)
    {
        bool isPrime = true;
        for(int j = 0; j <= sqrt(i); j++)
        {
            if (j != 0 && j != 1)
            {
                if (i % j == 0)
                {
                    isPrime = false;
                }
            }
        }
        if (isPrime)
        {
            primeNumbers.push_back(i);
        }
    }
}

int Primes::NumberOfPrimes() //Return how many prime numbers we have
{
    return primeNumbers.size();
}

int Primes::PrimeAt(int target) //Returns the Nth prime number
{
    if(target >= primeNumbers.size() || target < 0)
    {
        std::cout << "Requested value out of bounds." << std::endl;
        return 0;
    }
    else
    {
        return primeNumbers[target];
    }
}

void Primes::DisplayAllPrimes()
{
    for(int i = 0; i < primeNumbers.size(); i++)
    {
        std::cout << primeNumbers[i];
        if(i != primeNumbers.size()-1)
        {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;
    return;
}


