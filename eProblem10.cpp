/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.

Find the sum of all the primes below two million.
*/

#include <iostream>



bool isPrime(unsigned long long); 

int main()
{
	int l = 2000000;
	unsigned long long s = 0;
	std::cout<< "Calculating... \n";
	for(int x = 1; x < l; x++)
	{
		if (isPrime(x))
		{
			s = s + x;
			std::cout << x << std::endl;
		}
	}
	std::cout << "The sum of primes less than 2 million is " << s << std::endl;
	std::cin.get(); 
	
}

bool isPrime(unsigned long long n)  
{

	if (n == 1)
		return 0;
	else if ((n != 2) && (n % 2 == 0))
		return 0;

	for(unsigned long long x = n - 1; x > 1; x --)
	{
		if (n % x == 0)
		return 0;
	}
	
	return 1;
}

	