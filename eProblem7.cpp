/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.

What is the 10 001st prime number?
*/

#include <iostream>

bool isPrime(unsigned long long); // this is the same function from problem 3

int main()
{
	int n = 0;
	int x = 0;
	
	std::cout << "Calculating... \n";
	while(n <= 10001)
	{
			x ++;
		
		if( isPrime(x) )
		{
			n++;
		}

	}
	std::cout << "The 10001st prime number is " << x << std::endl;
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

	