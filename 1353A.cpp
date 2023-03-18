#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n,k,sum=0;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=1;i<=2;++i){
        for(int j=0;j<n;++j){
            if(i==1){
                cin>>a[j];
            }
            else{
                cin>>b[j];
            }
        }
    }
    for(int i=1;i<=k;++i){
        int mini=31,amin=0;
        for(int j=0;j<n;++j){
            if(a[j]<mini){
                mini=a[j];
                amin=j;
            }
        }
        int maxi=0,bmax=0;
        for(int j=0;j<n;++j){
            if(b[j]>maxi){
                maxi=b[j];
                bmax=j;
            }
        }
        if(a[amin]<b[bmax]){
            swap(a[amin],b[bmax]);
        }
    }
    for(int i=0;i<n;++i){
        sum+=a[i];
    }
    cout<<sum<<endl;
    
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