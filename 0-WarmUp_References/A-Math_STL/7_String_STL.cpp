/*
Strings STL
Name: Leonardo R. Andrade
*/
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

bool compare(string a, string b)
{
    return a>b;
}
int main(){
    string s1("Hello World");
    string s2, s3;
    s2 = "Leonardo";
    // getline(cin, s3);

    int tam = s2.length();
    for(int i = 0; i < tam; i++)
    {
        cout << s2[i]<<"-";
    }
    
    cout<<"\n";
    string arr[] = {"Apple", "Pineapple", "Mango", "Guava"};
    for(int i = 0; i < 4; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<<"\n";
    sort(arr ,arr+4);
    for(int i = 0; i < 4; i++)
    {
        cout<< arr[i] << " ";
    }

    cout<<"\n";
    sort(arr ,arr+4, compare);
    for(int i = 0; i < 4; i++)
    {
        cout<< arr[i] << " ";
    }
    return 0;
}