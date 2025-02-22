#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,fir= -1,sec= -1,thi= -1;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<arr.size();i++ ){
        cin>>arr[i];
    }
    for(i=0;i<arr.size();i++ ){
        if(arr[i]>fir) fir=arr[i];
    }
   for(int i=0;i<arr.size();i++){
    if(arr[i]>sec && arr[i]!= fir) sec=arr[i];
   }
    for(int i=0;i<arr.size();i++){
    if( arr[i]>thi &&   arr[i]!=sec && arr[i]!= fir) thi=arr[i];
   }

    cout<<"first :"<<fir<<endl;
    cout<<"sec :"<<sec<<endl;
    cout<<"third :"<<thi;
return 0;

}
