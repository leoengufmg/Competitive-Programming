/*
Priority_queue() using compare fuction

the compare function needs to be inside a comparator class, and also has to overload the class comparator
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <priority_queue>
#include <bits/stdc++.h
using namespace std;
 
/*
 class comparator{
	 public:
	 // use comparator()() to overload the class
	 bool comparator()(int a, int b)
	 {
		 // if a has higher priority, then a should apperar after b
		 // now return the min value 
		 if(a < b)
				return false;
		return true;
	 }
 };
*/

 struct comparator{
	 // use comparator()() to overload the class
	 bool comparator()(int a, int b)
	 {
		 // if a has higher priority, then a should apperar after b
		 // now return the min value 
		 if(a < b)	return false;
		 
		return true;
	 }
 };
 
 
 
int main(){
	priority_queue<int, vector<int>, comparator> pq; // minHeap
	
	pq.push(2);
	pq.push(3);
	
	cout << pq.top();
	
	return 0;
}