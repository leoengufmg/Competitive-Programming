/*
Queue STL
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <queue>
#include <cstring>
using namespace std;
/*
used to make trees, graphs (DFS)
    push(value)
    pop(value)
    front()
    empty()
*/
int main(){
    queue<string> s;
    s.push("Apple");
    s.push("Orange");
    s.push("Guava");

    while(!s.empty())
    {
        cout << s.front()<<endl;
        s.pop();
    }
    return 0;
}