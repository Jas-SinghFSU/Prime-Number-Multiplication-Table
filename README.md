# Prime Number Multiplication Table (Funding Circle)
Generates the first N prime numbers and makes a multiplication table based off of them. You can add more values to an already existing set by utilzing the existing functionality.

## Getting Started
This project was built using Xcode in C++. There are no additional dependencies required since only the built in libraries were used.
If you have Xcode, simply click the .xcodeproj file to open the project in the environment to run or build it.
Otherwise, all the files are in the folder labeled [Primes Number Multiplication Table](https://github.com/Jaskiratpal/Prime-Number-Multiplication-Table/tree/master/Prime%20Number%20Multiplication%20Table) and add those to your C++ project and build it in the environment of your choice.

## Calling Functions

All appropriate functions can be called in main after creating a PrimesTable object.

```c++
PrimesTable primeVariable(10); //Will generate 10 prime numbers

primeVariable.DisplayTable(); //Displays the multiplication table of the generated prime numbers
primeVariable.GenerateMorePrimes(5); //Generates 5 more prime numbers for a 15 total.
primeVariable.DisplayAllPrimes(); //Displays all the prime numbers
primeVariable.PrimeAt(1); //Returns the Second prime number. Note: Pass indexes
primeVariable.NumberOfPrimes(); //Returns how many prime numbers there are
primeVariable.ProductOfPrimeAt(2, 3); //Multiplies the 3rd and 4th prime numbers together and returns the value. Note: Pass indexes

//========== Test Cases ==========//
TestTenPrimes testVariable; //Declares the test variable that we use for testing
testVariable.RunTest(); //Run the test on the first ten prime numbers

```

## Time Complexity

K = Number of Primes

N = Numbers visited to generate K primes

Generating K Prime Numbers [GeneratePrimes()] - O(N sqrt(N)) 

Multiplication of Primes [DisplayTable()] - O(K^2)



## Running the tests

6 test cases are already created in the TestTenPrimes class. Simply creating an object of that class in main.cpp and calling the RunTest function will run the tests.

### Test Cases

Test cases for this program are for checking the edge cases and the middle case for prime number generation and the multiplication table.


## Built With

* Xcode - C++

## Authors

* **Jaskiratpal Singh**
