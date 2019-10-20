/*
Iterator (02:09:00)
	begin
	end
	[beg, end)
	
	Random Access
		Bidirectional
			foward 
				input
				output
Name: Leonardo R. Andrade
Reference:
http://www.cplusplus.com/reference/algorithm/binary_search/
*/

#include <iostream>
#include <stack>
#include <algorithm>

using namespace std;
// Program that removes all elements smaller than 20

bool isToBeRemoved(int n)
{
	if(n <= 20)
		return true;
	
	return false;
}

// function: remove_if ( http://www.cplusplus.com/reference/algorithm/remove_if/ )
int main()
{
	// 2, 20, 99, 1, 2
	int arr[10];
	int n;
	cin >> n;
	for(int i = 0; i < n; ++i)
	{
		cin >> arr[i];
	}
	
	// remove all the elements that are smaller than 20
	remove_if(arr, arr+n, isToBeRemoved);
	
	for(int i = 0; i < 1; i++)
	{
		cout << arr[] << " ";
	}
}