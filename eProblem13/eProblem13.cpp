//Work out the first ten digits of the sum of the following one-hundred 50-digit numbers (located in numbers.txt)

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main()
{
	const char * file = "numbers.txt";
	unsigned int summate[50][100] ; //that's not a word
	cout << "Reading file . . . \n";
	ifstream input; 
	input.open(file);
	char tempChar; 
	for(int n = 0; n < 100; n ++)
	{
		for(int d = 0; d < 50; d ++)
		{
			
			input >> tempChar;
			tempChar = tempChar - '0';
			summate[d][n] = tempChar; //it's still not a word
			
		}
	  cout << endl;
	}	
	cout << "File Read Success. \n";
	vector<int> sum(1, 0);	
	cout << "Adding \n";
	int index = 0;
	for(int d = 49; d >= 0; d --)
	{	for(int n = 0; n < 100; n ++)
		{
			sum.at(index) = sum.at(index) + summate[d][n];
		 
			if (sum.at(index) > 9)
			{
				sum.at(index) -= 10;
				
				if (index + 1 == sum.size())
					sum.push_back(1);
				
				else
					sum.at(index + 1) ++;
			}
			
		}
	 index ++;	
	}
	cout << "Sum = ";	
	for(int t =  (sum.size() - 1); t >= 0; t --)
		cout << sum.at(t);
		
}
	
	
	