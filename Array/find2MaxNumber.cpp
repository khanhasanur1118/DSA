#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,max,max2,position,i;
    cin>>n;
    int a[n],temp[n-1];
    for(i=0;i<n;i++ ){
        cin>>a[i];
    }
    max=a[0];
    position=0;
    //find max number
    for(i=0;i<n;i++ ){
        if(a[i]>max)
        {   max=a[i];
            position=i;
        }
    }
    //deleting first max num in array
    for(i=0;i<n-1;i++ ){
        if(i<position ){
            temp[i]=a[i];
        }
        if(i>=position ){
            temp[i]=a[i+1];
        }
    }
    max2=temp[0];
    cout<<endl;
    //finding 2nd max number
    for(i=0;i<n-1;i++ ){
        if(a[i]>max2 ){
            max2=temp[i];
        }
    }
    cout<<"max 1: "<<max<<"\n"<<"max 2: "<<max2<<endl;
return 0;

}
