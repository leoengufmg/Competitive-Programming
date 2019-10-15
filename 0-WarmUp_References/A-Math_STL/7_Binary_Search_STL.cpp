/*
Binary Search STL
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

/* T(n) = T(n/2) + k
    O(n) = O(Log(n))

    STL
        upper_bound(v.begin(), b.end(), 20);
        lower_bound(v.begin(), b.end(), 20);
        binary_search(v.begin(), b.end(), 20);
*/
int main(){
    int intNumbers[] = {10, 20, 30, 30, 20, 10, 10, 20};
    vector<int> v(intNumbers, intNumbers+8);
    vector<int>::iterator low, up, it;

    sort(v.begin(), v.end());
    for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<" ";
    cout<<"\n\n";
    up = upper_bound(v.begin(), v.end(), 20);
    low = lower_bound(v.begin(), v.end(), 20);
    
    cout << "Lower bound at position " <<(low-v.begin())<<endl;
    cout << "Upper bound at position " <<(up-v.begin())<<endl;
    return 0;
}