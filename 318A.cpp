#include <bits/stdc++.h>
using namespace std;
 
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,sereja{},dima{};
    cin>>n;
    int a[n];
    for(int i=0;i<n;++i){
       cin>>a[i];
    }
    int *p=&a[0];
    int *q=&a[n-1];
    for(int i=1;i<=n;++i){
        if(*p>*q){
            if(i%2!=0){
                sereja+=*p;
                p++;
            }
            else{
                dima+=*p;
                p++;
            }
        }
        else{
            if(i%2!=0){
                sereja+=*q;
                q--;
            }
            else{
                dima+=*q;
                q--;
            }
        }
    }
    cout<<sereja<<" "<<dima<<endl;
    return 0;
}