#include <bits/stdc++.h>
 
using namespace std;
 
void solve()
{
    int a,arr[5],c{};
    cin>>a;
    for(int i=0;i<3;++i){
        cin>>arr[i];
    }
    for(int i=0;i<3;++i){
        if(arr[i]>a){
            c++;
        }
    }
    cout<<c<<endl;
}
 
int main()
{
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
 
    return 0;
}