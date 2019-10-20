/*
Next_permutation()
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
 
int main(){
	vector<int> v(5);
	for(int i = 0; i < 5; i++) v[i] = i;
	
	nex_permutation(v.begin(), b.end());
	
	for(int i = 0; i < 5; i++) cout << v[i] << " ";
	
	return 0;
}