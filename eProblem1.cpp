
/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <iostream>

using namespace std;

int limit = 1000;
int sum = 0;

int main()
{

	for (int x = 0; x < limit; x ++)
		{
			if (x % 3 == 0)
			sum = sum + x;
	
		}
		
		for (int x = 0; x < limit; x ++)
		{
			if ((x % 3 != 0) & (x % 5 == 0) )
			sum = sum + x;
	
		}
	cout << sum;
	cin.get();
}