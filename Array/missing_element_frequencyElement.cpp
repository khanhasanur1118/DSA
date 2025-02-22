#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int arr[n-1],f[n+1]={};
    int ans;
     for(int i=0 ;i<n-1   ;i++ ){
        cout<<"input no"<<""<<i+1<<":";
        cin>>arr[i];
        f[arr[i]]++;
     }
    for(int i=1;i<=n;i++ ){
        if(f[i]==0){
            ans=i;
            break;
        }
    }
    cout<<"the missing element in this array is:"<<ans<<endl;
return 0;
}
