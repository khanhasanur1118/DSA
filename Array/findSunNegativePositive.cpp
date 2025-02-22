#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,sum1=0,sum2=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++ ){
        cin>>arr[i];
        if(arr[i]>0)sum1+=arr[i];
        if (arr[i]<0)sum2+=arr[i];
    }
    cout<<"positive sum: "<<sum1<<" & "<<"negative sum: "<<sum2<<endl;

return 0;

}
