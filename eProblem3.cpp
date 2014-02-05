/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ? */

//the real question is WHAT is a prime factor....

// A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. 
//THIS PROGRAM IS EXTREMELY SLOW: THERE MUST BE A BETTER WAY
#include <iostream>

unsigned long long f = 600851475143; 

bool isPrime(unsigned long long);

int main()
{
	std::cout << "Calculating... this will take FOREVER " << std::endl;
	for (unsigned long long x = f - 1; x > 1; x --)
	{
		
		if ((f % x) == 0 && isPrime(x))
		 {
			std::cout << "largest prime is " << x << std::endl;
			break;
		}
		 
	}
	
	std::cin.get(); 
	
}

bool isPrime(unsigned long long n)
{
	for(unsigned long long x = n - 1; x > 1; x --)
	{
		if (n % x == 0)
		return 0;
	}
	
	return 1;
}

	
	