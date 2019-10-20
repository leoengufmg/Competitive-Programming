#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
    int n;
    cin >> n;
	vector<int> arr;
    if(n >= 0)
    {
        for(int i = 0; i < 2*n; i++)
        {
            int value;
            cin >> value;
            arr.push_back(value);
            // cout << arr[i] << " ";
        }
        sort(arr.begin(), arr.end());
        // cout << arr.size();
        int med = (arr.size() / 2) - 1;
        cout << arr[med];
    }
    return 0;
}