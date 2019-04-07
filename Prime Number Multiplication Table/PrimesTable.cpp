//
//  PrimesTable.cpp
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//

#include "PrimesTable.h"

PrimesTable::PrimesTable() : Primes()
{
    
}

PrimesTable::PrimesTable(int reqNumOfPrimes) : Primes(reqNumOfPrimes)
{
    
}

void PrimesTable::DisplayTable()
{
    int spacingSize = 6; //Used in setw() for spacing only
    
    for (int rowCell = 0; rowCell <= primeNumbers.size(); rowCell++) {
        
        //Display the top row of the table (Prime values)
        if(rowCell == 0)
        {
            for (int colCell = 0; colCell <= primeNumbers.size(); colCell++)
            {
                if (colCell == 0)
                {
                    std::cout << " ";
                }
                else
                {
                    std::cout << std::setw(spacingSize) << primeNumbers.at(colCell-1);
                }
            }
        }
        else //Displays all the multiplied values
        {
            for (int colCell = 0; colCell <= primeNumbers.size(); colCell++)
            {
                if (colCell == 0) //display the prime numbers vertically on the left side of the table
                {
                    std::cout << primeNumbers.at(rowCell-1);
                }
                else
                {
                    std::cout << std::setw(spacingSize) << primeNumbers.at(colCell-1) * primeNumbers.at(rowCell-1);
                }
            }
        }
        std::cout << std::endl << std::endl << std::endl;
    }
    return;
}

int PrimesTable::ProductOfPrimeAt(int target, int target2)
{
    return PrimeAt(target) * PrimeAt(target2);
}
