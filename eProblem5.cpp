/* 
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/

#include <iostream>

int main()
{
	int a = 2520;
	std::cout << "Calculating... \n";	loop:
	for(int x = 1; x < 21; x ++)
	{
		if (a % x)
		{ 
			a ++;
			goto loop;
		}	
	}
	std::cout << "The answer is " << a << std::endl;
	std::cin.get();
}