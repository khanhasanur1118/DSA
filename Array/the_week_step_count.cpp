#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans=0;
    int mx=7*n;
    int arr[mx+1];

    for(int i=1; i<=mx; i++ )cin>>arr[i];

    for(int i=1  ;i<=mx   ;i++ ){
         ans+=arr[i];
         if(i%7==0)
            {   cout<<ans<<" ";
                ans=0;
            }
    }




return 0;

}
