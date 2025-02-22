#include <bits/stdc++.h>
using namespace std;

int main() {
    int i,n,indexNumber=-1;
    cin>>n;
    int arr[n];

    for(i=0;i<n;i++ ){
        cin>>arr[i];
    }
    int searchElement;
    cout<<"input search number:";
    cin>>searchElement;

    for(i=0;i<n;i++ ){
        if(arr[i]==searchElement){
            indexNumber=i;
            break;
        }
    }
    if(searchElement!= -1){
        cout<<indexNumber;
    }


return 0;

}
