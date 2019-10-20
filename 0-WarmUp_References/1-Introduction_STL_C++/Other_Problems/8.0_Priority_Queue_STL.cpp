/*
Priority_Queue STL
Name: Leonardo R. Andrade

MinHeap and MaxHeap
*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <vector>
#include <cstring>

// to use greater<int> or less<int>
#include <functional>
using namespace std;
/*
used to make trees, graphs (DFS)
    push(value)
    pop(value)
    front()
    empty()
*/
int main(){
	
	// minHeap
	// priority_queue<int, vector<int>, greater<int>> 
	
	// maxHeap
	priority_queue<int> pq;
	int a[10] = {1, 2, 3, 4, 5, 6};
	
	// insert these in pq
	for(int i = 0; i < 6; i++)
	{
		pq.push(a[i]);
	}
	// heap - max or min, depending if using a comparator
	while(!pq.empty())
	{
		cout << pq.top() << ",";
		pq.pop();
	}
	
    return 0;
}