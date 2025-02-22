#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++ ){
        cin>>arr[i];
        sum+=arr[i];
    }
    float avrrage=(float)sum/n;
    cout<<avrrage<<endl;

return 0;

}
