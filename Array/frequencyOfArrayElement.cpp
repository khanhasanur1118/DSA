#include <bits/stdc++.h>
using namespace std;

int main() {
    int count=0,i,j;

    int arr[6]={1,3,2,2,3,3};
    int freq[]={};

    for(int i=0 ;i <6  ;i++ ){
        count=1;
        if(arr[i]!=-1){
            for(int j=i+1  ;j<6   ;j++ ){
                    if(arr[i]==arr[j]){
                        count++;
                        arr[j]=-1;
                    }
            }
            freq[i]=count;
        }
    }

    for(int i=0  ;i<6   ;i++ ){
        if(arr[i]!= -1)cout<<"frequency of "<<arr[i]<<"is"<<freq[i]<<endl;
    }
return 0;

}
