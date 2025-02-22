#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int>a={1,2,3,4,5,6,7,8,9};
    int n=a.size();
    int even[n],odd[n];
    for(int i=0;i<a.size();i++ ){
        if (a[i]%2==0) cout<<a[i]<<" ";
    }
  cout <<endl;
    for(int i=0;i<a.size();i++ ){
            if(a[i]%2==1) cout<<a[i]<<" ";
    }

return 0;

}
