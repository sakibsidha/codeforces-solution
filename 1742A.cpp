#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[3];
    for(int i=0;i<3;++i){
        cin>>a[i];
    }
    sort(a,a+3);
    if(a[0]+a[1]==a[2]){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}
int main(){
    int tt;
    cin>>tt;
    while(tt--){
        solve();
    }
    return 0;
}