#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,value;
    cin>>n;

    vector<int>arr;
    for(int i=0;i<n;i++ ){
        cin>>value;
        arr.push_back(value);
    }
    for(int i=0;i<n/2;i++ ){
        swap(arr[i], arr[n - i - 1]);
    }
    for(int u:arr ){
       cout<<u<<" ";
    }
return 0;

}
