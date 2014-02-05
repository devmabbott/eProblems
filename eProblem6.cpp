/*
The sum of the squares of the first ten natural numbers is,
12 + 22 + ... + 102 = 385

The square of the sum of the first ten natural numbers is,
(1 + 2 + ... + 10)2 = 552 = 3025

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/
#include <iostream>

int sum(int);
int square(int);

int main()
{
	std::cout << "Calculating... \n";
	int r = square(100) - sum(100);
	std::cout << "The difference is " << r << std::endl;
}

int sum(int l)
{
	int s = 0;
	for(int x = 1; x <= l; x++)
	{
		s = s + (x * x);
	}
	return s;
}

int square(int l)
{
	int s = 0;
	for(int x = 1; x <= l; x++)
	{
		s = s + x;
	}
	return s * s;
}