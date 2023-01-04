/*
Name: Leonardo R de Andrade
CODECHEF - MARCHA1
https://www.codechef.com/problems/MARCHA1

have nodes of numbers
	10, 15, 20, 25, 30
	
is possible to have a subset that sum is k?
	yes or no
*/

#include <iostream>
#include <cstring>
using namespace std;

void checkSum(int no, int k, int *arr)
{
	int soma = 0;
	while(no > 0)
	{
		
	}
}
int main()
{
	int t, n, k;
	cin >> t;
	for(int i = 0; i < t; i++)
	{
		cin >> n;
		cin >> k;
		int arr[n]{0};
		for(int l = 0; l < n; l++)
			cin >> arr[l];
		int range = (n)-1;
		for(int j = 0; j <= range; j++)
		{
			checkSum(j, k, arr);
		}
	}
	return 0;
}

