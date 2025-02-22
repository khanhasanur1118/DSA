#include <bits/stdc++.h>
using namespace std;

int main() {
  int i,n;
  cin>>n;
  vector<int>arr(n);
  for(i=0;i<arr.size();i++ ){
    cin>>arr[i];
  }
  int max=arr[0];
   for(i=0 ;i<arr.size();i++){
     if(arr[i]>max){
        max=arr[i];
     }
   }
 cout<<"max element is :"<<max;

return 0;

}
