/*Starting in the top left corner of a 2×2 grid, and only being able to move to the right and down, 
there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid? */


#include <iostream>

using namespace std;

int main()
{
	int length, height;
	cout << "How long is the grid? ____\b\b\b\b";
	cin >> length;
	length ++;
	
	cout << "\n How tall is the grid? ____\b\b\b\b";
	cin >> height;
	height ++;
	
	
	long long ** grid = new  long long *[length];
	
	for (int i = 0; i < length; i ++)
		grid[i] = new long long [height];
		
		
	for(int L = 0; L < length; L ++)
		grid[L][0] = 1;
		
	for(int H = 0; H < height; H++)
		grid[0][H] = 1;
		
	for(int len = 1; len < length; len ++)
		for(int hei = 1; hei < height; hei ++)
			grid[len][hei] = grid[len -1 ][hei] + grid[len][hei - 1];
			
	cout << "There are " << grid[length - 1][height - 1] << " total paths, \n THANK YOU COME AGAIN" << endl;
		
	//cleanup
	for (int i = 0; i < length; i ++)
		delete [] grid[i];
		
	delete [] grid;
	
	
}