#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,index,delNum,count=0;
    cin>>n;
    int arr[n],temp[n-1];
    for(i=0;i<n;i++ ){
        cin>>arr[i];
    }
    cout<<"prefered delete number input:"<<endl;
    cin>>delNum;
    for(i=0;i<n;i++ ){
        if(arr[i]==delNum){
            index=i;
            count=1;
        }
    }
    for(i=0;i<n-1 & count==1;i++ ){
        if(i<index)temp[i]=arr[i];
        if(i>=index)temp[i]=arr[i+1];
    }
    for(i=0;i<n-1;i++){

        cout<<temp[i];
        if(i<n-2)cout<<",";
    }

return 0;

}
