/*
Name: Leonardo R de Andrade
UNIQUE NUMBERS II

a[] = {2,1,3,5,1,6,3,2}
unique: 5, 6
make XOR with all elements and the see which bit of these numbers is diff
to than divide into two parts (iterations)
Part I: have the bit that is diff set to 1
Part II: have the bit that is diff set to 0
*/

#include <iostream>
#include <cstring>
using namespace std;

void findUnique2(int *a, int n)
{
	int res = 0;
	for(int i = 0; i < n; i++)
	{
		res = res^a[i];
	}
	// find the rightmost set bit in res
	int i = 0; 
	int temp = res;
	while(temp > 0)
	{
		if(temp & 1)
				break;
		i++;
		temp = temp>>1;
	}
	int mask = (1 << i);
	
	int firstNo = 0;
	for(int i = 0; i < n; i++)
	{
		if((mask & a[i])!=0)
		{
			firstNo = firstNo^a[i];
		}
	}
	
	int secondNo = res^firstNo;
	
	cout << firstNo << endl;
	cout << secondNo << endl;
}
int main()
{
	int n;
	int a[] = {1, 3, 5, 6, 3, 2, 1, 2};
	n = sizeof(a)/sizeof(int);
	findUnique2(a, n);
}

