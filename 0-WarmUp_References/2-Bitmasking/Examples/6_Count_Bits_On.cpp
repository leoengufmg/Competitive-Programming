/*
Name: Leonardo R de Andrade
Q6 -  calculate the bits that have 1

*/

#include <iostream>
using namespace std;

void countBitsSlow(int n)
{
	int count = 0; 
	while(n > 0)
	{
		count += (n&1);
		n = n >> 1;
	}
	cout << "The number of bits that are on is: " << count << endl;
}

void countBitsFast(int n)
{
	int count = 0; 
	while(n)
	{
		count++;
		n = n & (n - 1);
	}
	cout << "The number of bits that are on is: " << count << endl;
}

int main()
{
	int n; 
	cin >> n;
	countBitsSlow(n);
	countBitsFast(n);
	return 0;
}

