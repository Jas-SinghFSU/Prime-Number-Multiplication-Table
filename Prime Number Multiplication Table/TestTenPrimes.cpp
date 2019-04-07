//
//  TestTenPrimes.cpp
//  Prime Number Multiplication Table
//
//  Created by Jas Singh on 4/6/19.
//

#include <cassert>
#include "TestTenPrimes.h"

TestTenPrimes::TestTenPrimes(): testValues(10)
{
    
}

void TestTenPrimes::RunTest()
{
    std::cout << std::endl << "====================== CHECKING TEST CASES ======================" << std::endl;
    //======== Test Cases for generated prime numbers ============//
    //Test case for the first prime number
    int totalTestCases = 6;
    int testCasesPassed = 0;
    if (testValues.PrimeAt(0) == 2)
    {
        std::cout << "Case 1 Passed: " << testValues.PrimeAt(0) << " == 2. First prime number." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 1 Failed: " << testValues.PrimeAt(0) << " == 2. First prime number."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.PrimeAt(0) << ". Expected Value: 2" << std::endl;
        
    }
    
    //Test case for the fifth prime number
    if (testValues.PrimeAt(4) == 11)
    {
        std::cout << "Case 2 Passed: " << testValues.PrimeAt(4) << " == 11. Fifth prime number." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 2 Failed: " << testValues.PrimeAt(4) << " == 11. Fifth prime number."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.PrimeAt(4) << ". Expected Value: 11" << std::endl;
        
    }
    
    //Test case for the last (10th) prime number
    if (testValues.PrimeAt(9) == 29)
    {
        std::cout << "Case 3 Passed: " << testValues.PrimeAt(9) << " == 29. Tenth prime number." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 3 Failed: " << testValues.PrimeAt(9) << " == 29. Tenth prime number."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.PrimeAt(9) << ". Expected Value: 29" << std::endl;
        
    }
    
    //================= Test Cases for Prime Number Multiplication ==================//
    // Test if the multiplication of the first prime numbers is correct: 2x2 = 4
    if (testValues.ProductOfPrimeAt(0, 0) == 4)
    {
        std::cout << "Case 4 Passed: " << testValues.ProductOfPrimeAt(0, 0) << " == 4. First Prime # (2) * First Prime # (2)." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 4 Failed: " << testValues.ProductOfPrimeAt(0, 0) << " == 4. First Prime # (2) * First Prime # (2)."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.ProductOfPrimeAt(0, 0) << ". Expected Value: 4" << std::endl;
        
    }
    
    //Test if the multiplication of the 3rd(5) and 7th(17) prime number is correct : 5x17 = 85
    if (testValues.ProductOfPrimeAt(2, 6) == 85)
    {
        std::cout << "Case 5 Passed: " << testValues.ProductOfPrimeAt(2, 6) << " == 85. Third Prime # (5) * Seventh Prime # (17)." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 5 Failed: " << testValues.ProductOfPrimeAt(2, 6) << " == 85. Third Prime # (5) * Seventh Prime # (17)."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.ProductOfPrimeAt(2, 6) << ". Expected Value: 85" << std::endl;
        
    }
    
    //Test if the multiplication of the last prime numbers is correct : 29x29 = 841
    if (testValues.ProductOfPrimeAt(9, 9) == 841)
    {
        std::cout << "Case 6 Passed: " << testValues.ProductOfPrimeAt(9, 9) << " == 841. Tenth Prime # (29) * Tenth Prime # (29)." << std::endl;
        testCasesPassed++;
    }
    else
    {
        std::cout << "Case 6 Failed: " << testValues.ProductOfPrimeAt(9, 9) << " == 841. Tenth Prime # (29) * Tenth Prime # (29)."  << std::endl;
        std::cout << "    -Returned Value: " << testValues.ProductOfPrimeAt(9, 9) << ". Expected Value: 841" << std::endl;
        
    }
    
    std::cout << std::endl << testCasesPassed << "/" << totalTestCases <<" tests Successful." << std::endl << std::endl;
    return;
}
