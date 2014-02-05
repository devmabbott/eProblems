/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <iostream>
#include <sstream>

using namespace std;

bool palindrome(string);
string reverse(string);

int main()
{
	cout << "Calculating..." << endl;
	int maxp = 0; //if the maxp variable is not used then the program would simply print the FIRST palindrome it found rather than the maximum palindrome
	for(int y = 999; y > 99; y --)
		for(int z = 998; z > 99; z --)
		{
			ostringstream p;
			p << (y * z);
			string pstring = p.str();
			if (palindrome(pstring))
			{	
				if((y*z) > maxp)
					maxp = y*z;
			
				//cout << pstring << endl;
				//goto end_loop;
				//cin.get();
			}
			
		}
	//end_loop:
	cout << maxp << endl;
	cin.get();
}

string reverse(string s)
{
	string r = "";
	for(int x = 0; x < s.length(); x++)
	{
		r = s[x] + r;
	}
	
	return r;
}

bool palindrome(string s)
{
	string r = reverse(s);
	if ( s == r )
	return 1;
	else 
	return 0;
}
