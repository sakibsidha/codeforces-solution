#include <bits/stdc++.h>
 
using namespace std;
 
int prime(int n){
    int counter=0;
    for(int i=2;i<n;++i){
        if(n%i==0)
        counter++;
    }
    if(counter==0){
        return 1;
    }
    else {
        return 0;
    }
}
 
int main()
{
    int n;
    cin>>n;
    while(n++){
        if(prime(n)==1){
            break;
        }
    }
    int m;
    cin>>m;
    if(m==n){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}