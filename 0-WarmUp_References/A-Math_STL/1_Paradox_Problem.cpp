// Paradox Problem
/*
   What is the minimum number of people that shoul be present in a room so that there's a 50% chance of two people having same birthday?

. for 100% chance -> 365+1 people
2 persons in the room, prob have same birtday
p = 1/365

1 persons in the room, prob have diff birtday
p = 365/365 

2 persons in the room, prob have diff birtday
p = 1 - 1/365 = 364/365

3 persons in the room, prob have diff birtday
p = 365/365 * 364/365 * 363/365

q - same day
p - diff day

Prob of 2 pp have same birth is at least 0.5
p+q >= 1

p <= 0.5

How to compute value of n
*/
#include <iostream>
using namespace std;

int main(){
	// Compute the number of ppl such that the prob ppl have same birthday
	float num = 365; 
	float denom = 365; 
	
	// p denote the prob of same ppl hae birthday on same day
	float p = 1;
	
	// number of people
	int n = 0; 
	
	// sentinela of value of p, if what 90% on same birthday, p > 0.1
	while(p > 0.1)
	{
		p*=num/denom;
		num--;
		n++;
		cout << "Probabilitey is " << p << "number of people are " <<n<<endl;
	}
}