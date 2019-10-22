/*
Exercise FIGUREFUL
Find the pearson with two values of integer.
*/
#include <iostream>
#include <map>
#include <bits/stdc++.h>

using namespace std;

int main()
{
	typedef pair<int, int> ii;
	int n;
	
	map <ii, string> table;
	
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		ii code;
		string name;
		cin >> code.first >> code.second;
		cin >> name;
		table[code] = name;
	}
	
	int q;
	cin >> q;
	for(int i = 0; i < q; i++)
	{
		ii code;
		cin >> code.first >> code.second;
		cout << table[code] << endl;
	}
}