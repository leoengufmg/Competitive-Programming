/*
Name: Leonardo R de Andrade
Q7 -  Swap numbers

turn a to b
turn b to a

Using XOR operation is faster

a = a^b^a =b

*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a;
	cin >> b; 
	cout << "a: " << a << "\nb: " << b << endl;
	c = a;
	a = a^b^a;
	b = b^c^b;
	cout << "a: " << a << "\nb: " << b << endl;
	return 0;
}

