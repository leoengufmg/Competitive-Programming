/*
Stack
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <stack>
#include <cstring>
using namespace std;
/*
    push(value)
    pop(value)
    top()
    empty()
*/
int main(){
    stack<string> s;
    s.push("Apple");
    s.push("Orange");
    s.push("Guava");

    while(!s.empty())
    {
        cout << s.top()<<endl;
        s.pop();
    }
    return 0;
}