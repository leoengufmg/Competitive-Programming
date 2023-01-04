// Big Interger (00:48:00)
/*
We use Big Interger to compute big numbers. In java, python it easy to work with big intergers. in C++ its difficult because the lon long int dataype can store only
max 18 digits.

long long max 18 digits
100! using 158 digits

So for problems involving Big Numbers (containing 100 digits) we either use Java Big Interger Class or Python or we use Arrays in C++.

Note: there is a BOOST C++ library which allows us to work with big intergers as well.

BOOST C++ Library

Example: Computing Large Factorial in C++

1234
*15
-------
18510  -> index Right to Left

SOl: use array to store the digits
*/

#include <iostream>
using namespace std;

// multiply(a, n, i)
void multiply(int *a, int &n, int no)
{
	int carry = 0; 
	
	// going to store in reverse order=> 4 * 321 = {4, 8, 2, 1}
	for (int i = 0; i < n; i++)
	{
		int product = a[i]*no+carry;
		a[i] = product%10;
		carry = product/10;
	}
	
	// left out carry
	while(carry)
	{
		a[n] = carry %10;
		carry = carry/10;
		n++;
	}
}

void big_factorial(int number){
	
	// assuming that ans contains at max 1000 digits, all positins are 0 initially
	int *a = new int[1000]{0};
	
	// fatorial start by 1 
	a[0] = 1;
	
	// which denotes the index of the array, till which we
	// have stored some digits. If 24, n = 2, because ocuppy 2 digits
	int n = 1; 
	
	for(int i = 2; i <= number; i++)
	{
		multiply(a, n, i);
	}

    // print the digits in the reverse order
	for(int i = n-1; i >= 0; i--)
	{
		cout << a[i];
	}
	cout <<endl;
    cout << n << " digits" << endl;
    cout <<endl;
}

int main()
{
	big_factorial(100);
    return 0;
}