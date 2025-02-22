#include <bits/stdc++.h>
using namespace std;

  void reverseArr(vector<int>&arr){
    int left=0,right=arr.size()-1;
    while(left<right){
        swap(arr[left],arr[right]);
        left++;
        right--;
    }

  }

int main() {
    int n,i;
    cin>>n;
    vector<int>arr(n);
    for(i=0;i<n;i++ ){
        cin>>arr[i];
    }
     reverseArr(arr);
     for(i=0;i<n;i++ ){
            cout<<arr[i];

       if(i<n-1) cout<<",";
     }

return 0;

}
