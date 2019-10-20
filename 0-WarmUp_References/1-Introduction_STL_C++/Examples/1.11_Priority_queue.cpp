/*
Priority_queue()
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <priority_queue>
#include <bits/stdc++.h
using namespace std;
 
int main(){
	priority_queue<int> pq; // minHeap or MaxHeap
	
	pq.push(2);
	pq.push(3);
	
	cout << pq.top();
	
	return 0;
}