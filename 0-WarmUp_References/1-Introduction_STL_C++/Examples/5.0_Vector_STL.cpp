/*
Vectors STL
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
/*
    push_back(value)
    pop_back(value)
    reserve(value) // avoid the process of dobling
    v.clear()


*/

bool compare(int a, int b)
{
    return a>b;
}

int main(){
    vector<int> v;
    v.reserve(100);
    int n; 
    n = 4;

    for(int i = 0; i < n; i++)
    {
        v.push_back(i);
        cout<<v[i] << " ";
    }
    cout << "\n";

    v.pop_back();
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i] << " ";
    }
    cout << "\n";
	
	// capacity() is equal the value used on "reserve()"
	// size() is equal the position ocuppied on vector
    cout << "v.capacity() "<< v.capacity() <<"\nv.size() "<<v.size()<<"\nv.max_size() "<<v.max_size();
    v.clear();
    return 0;
}