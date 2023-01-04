/*
Exercise AMR12G - The Glottering Caves of Aglarond
02:58:00

*/

#include <iostream>
#include <map>
#include <bits/stdc++.h>

int main()
{
	int T;
	char mat[55][55];
	cin >> T;
	
	for(int i = 0; i < T; i++)
	{
		int m, n k;
		vector<int> bulbsLit(m,0);
		
		// read the config/matrix
		for(int j = 0; j < m; j++)
		{
			for(int c = 0; c < n; c++)
			{
				cin >> mat[j][c];
				if(mat[j][c] == '*') ++bulbsLit[j];
			}
		}
		
		// bulbsLit constains all the bulbs corresponding to row
		sort(bulbsLit.begin(), bulbsLit.end(), less<int>());
		
		int idx = 0;
		while( (k > 0) && (idx < m) && ((n-bulbsLit[idx]) > bulbsLit[idx]) )
		{
			// for any left attempt toggle a possible row
			bulbsLit[i] = n-bulbsLit[i];
			--k;
			++idx;
		}
		
		
		if(k != 0 && k % 2 == 1)
		{
			auto it = min_element(bulbsLit.begin(), bulbsLit.end());
			*it = N - *it;
		}
		
		cout << accumulate(bulbsLit.begin(), bulbsLit.end(), 0) << "\n";
	}
	
	return 0;
}