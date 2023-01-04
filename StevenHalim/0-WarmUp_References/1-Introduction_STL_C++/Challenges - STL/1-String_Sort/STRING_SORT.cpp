#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>

using namespace std;

bool compare(string s, string s1){
    if((s[0]==s1[0]) && (s.length() == s1.length()))
        return s<s1; // descending order.
    else
    {
        if((s[0]==s1[0]))
            return s.length()>s1.length(); // descending order.
        else
            return s<s1; // ascending order.
    }
}
int main() {
	int n;
    cin>>n;
    if(n >= 0)
    {
        string s;
        string str[n];
        for(int i=0;i<n;i++){
            cin>>s;
            str[i]=s;
        }
        sort(str,str+n,compare);
        for(int i=0;i<n;i++){
            cout<<str[i]<<endl;
        }
    }

    return 0;
}