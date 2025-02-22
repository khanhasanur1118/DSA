#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    long long sum=0,arrSum=0;
    cin>>n;
    int arr[n-1];

    for(int i=0;i<n-1;i++)cin>>arr[i];

    for(int i=0;i<n-1;i++ ){
            arrSum+=arr[i];
    }
    sum=(n*(n+1))/2;
    cout<<sum<<endl;
    cout<<sum-arrSum<<endl;
return 0;

}
