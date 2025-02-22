#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int>arr(n);
    vector<int>temp(n-1);
    for(int i=0;i<arr.size();i++ ){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    int larg1= -1;
    int larg2= -1;

    for(int i=0;i<arr.size();i++ ){
        if(arr[i]>larg1)larg1=arr[i];
    }
    for(int i=0;i<arr.size();i++ ){
        if(arr[i]>larg2 && arr[i]!=larg1)larg2=arr[i];
    }
    cout<<"1st largest number: "<<larg1<<endl;
    cout<<"2nd largest number: "<<larg2;
return 0;

}
