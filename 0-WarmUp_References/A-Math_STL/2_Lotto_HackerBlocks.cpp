// Lotto (HackerBlocks)
/*
In the German Lotto you have to select 6 numbers from the set (12_49). A popular strategy to play Lotto - although it doesnt increase your chance of winning - 
is to select a subet S containing k (k > 6) of these 49 numbers and then play several games with choosing numbers only fro S. 

For example, for k = 8 and S = 1, 2 3, 5, 8, 13, 21, 34 there are 28 possible games (1,2,3,5,8,13), (1,2,3,5,8,21), (1,2,3,5,8,34),...

Your job is to write a program that reads in the number k and the set S and then prints all possible games choosing numbers only from S.

We can do brute force with 6 loops and is n^6. For n >= not good

Using recursion, is exponential 2^n, and if N = 50, we can approx 2^10 to 1000, and will be approx 10^8, also not good
*/
#include <iostream>
using namespace std;
int main()
{
	// numbers are 1 to 49 
	// choose a subset of a 6 numbers
	int n = 9;
	int a[] = {1,2,4,5,6,7,8,10,12};
    int cont = 0;
	for (int i = 0; i < n-5; i++)
	{
		for(int j = i+1; j < n-4; j++)
		{
			for(int k = j+1; k < n-3; k++)
			{
				for(int l = k+1; l < n-2; l++)
				{
					for(int m = l+1; m < n-1; m++)
					{
						for(int o = m+1; o < n; o++)
						{
							cout << a[i]<<","<< a[j]<<","<< a[k]<<","<< a[l]<<","<< a[m]<<","<< a[o]<<endl;
                            cont++;
						}
					}
				}
			}
		}
	}
    cout << "The number of possibilities are "<<cont<<endl;
	return 0;
}