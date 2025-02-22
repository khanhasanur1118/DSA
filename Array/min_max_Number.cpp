#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,min,max;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++ ){
        cin>>arr[i];
    }
    min=arr[0];
    max=arr[0];
    for(i=0;i<n;i++){
        if(arr[i]>max)max=arr[i];
        if(arr[i]<min)min=arr[i];
    }
    cout<<"min :"<<min<<"  max :"<<max<<endl;
return 0;

}
