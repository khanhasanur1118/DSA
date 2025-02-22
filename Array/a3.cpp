#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, valEsum = 0,indexsum=0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << endl;
    for (int u : arr) cout << u << " ";
    cout<<endl;
    for( int i=0;i<n;i++ ){
        if (arr[i]%2==0) valEsum+=arr[i];
        if(i%2==0) indexsum+=arr[i];
    }
    cout<<valEsum<<endl;

    cout << indexsum;
    return 0;
}
