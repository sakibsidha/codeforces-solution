#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    for(int i=0;i<4;++i){
        cin>>a[i];
    }
    string s;
    cin>>s;
    int sum=0;
    int len=s.length();
    for(int i=0;i<len;++i){
        sum+=a[(s[i]-48)-1];
    }
    cout<<sum<<endl;
    return 0;
}