/*
Name: Leonardo R de Andrade
Q9 -  Find subsequence of a string
a b c

a
b
c
ab
bc
ac
abc

0 to (2^n - 1) => (1 << n) - 1
*/

#include <iostream>
#include <cstring>
using namespace std;

// Generate all subsets using bitmasking
void filterChars(char *a, int no)
{
	// a = "abc" no = 5 -- output should ac
	int i = 0;
	
    /* no can be:
    000
    001
    010
    100
    011
    101
    110
    111
    */
	while(no > 0)
	{
		(no&1)?cout<<a[i]:cout <<"";
        i++;
		no = no>>1;
	}
	cout << endl;
}

// Generate a range of numbers from 0 to 2^n -1
void generateSubsets(char *a)
{
	int n = strlen(a);
	int range = (1 << n)-1;
	for(int i = 0; i <= range; i++)
	{
		filterChars(a, i);
	}
}

int main()
{
	int n, i;
	char a[100];
	cin >> a;
	generateSubsets(a);
	return 0;
}

