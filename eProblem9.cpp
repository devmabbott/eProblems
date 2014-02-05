/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a2 + b2 = c2

For example, 32 + 42 = 9 + 16 = 25 = 52.

There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <iostream>

bool sum(int, int, int);
bool pyt(int, int, int);

int main()
{
	std::cout << "Calculating... \n";
	for(int x = 1; x < 1000; x++)
		for(int y = 1; y < 1000; y++)
			for(int z = 1; z < 1000; z++)
			{
				if (sum(x, y, z) && pyt(x, y, z))
				{
					std::cout<< "The triplets are... " << x << ", " << y << ", " << z << std::endl;
					std::cout<< "The product is " << x * y * z << std::endl;
					goto end_loop;
				}
			}
	end_loop:
	std::cin.get();
}


bool sum(int a, int b, int c)
{
	if ((a + b + c) == 1000)
		return true;
		
	else return false;
}

bool pyt(int a, int b, int c)
{
	if ((a * a) + (b * b) == (c * c))
		return true;
	else return false;
}