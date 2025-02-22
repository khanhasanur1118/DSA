#include <bits/stdc++.h>
using namespace std;

int main() {
    array<int, 10> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for (size_t i = 0; i < a.size(); i++) {
        cout << a[i];
        if(i<a.size()-1)cout<<',';
    }
    cout << endl;
    cout<<a.at(5)<<endl;
    a.fill(1);
    for(int u:a)cout<<a[u];
    cout<<endl;
    a[0]+=a[1];
    cout<<a[0]<<"\n";
    cout<<"new array"<<"\n";
    int b[4]={};
    for(int u:b)cout<<b[u]<<",";
    return 0;
}
