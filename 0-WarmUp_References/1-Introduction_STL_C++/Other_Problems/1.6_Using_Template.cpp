/*
Using template to print array value
with different kind of type

allow to use some function usingdiff data type
Name: Leonardo R. Andrade
*/

#include <iostream>
using namespace std;

template <class T>

void printArr(T arr[], int n)
{
	for(int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
}

int main()
{
	//int arr[] = {1, 2, 3};
	char arr[] = "abc";
	printArr(Arr, 3);
}