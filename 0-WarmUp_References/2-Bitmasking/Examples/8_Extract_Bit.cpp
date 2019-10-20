/*
Name: Leonardo R de Andrade
Q8 -  Extract, clear, set ith bit of a number

build a mask of which bit what and then make & operation
*/

#include <iostream>
using namespace std;

int getIthBit(int n, int i)
{
	return (n & (1 << i)) != 0?1:0;
}

// Change ith bit of no to 1
void setIthBit(int &n, int i)
{
	int mask = 1<<i;
	n = (n|mask);
}

// Clear ith bit to zero
void clearBitZero(int &n, int i)
{
	int mask= ~(1 << i);
	n = (n & mask);
}

int main()
{
	int a, i;
	
	cin >> a;
	cin >> i;
	
	cout << getIthBit(a, i) << endl;
	return 0;
}

