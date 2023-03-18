#include <bits/stdc++.h>
using namespace std;
 
void solve(){
   int n;
   cin>>n;
   long long int a[n];
   for(int i=0;i<n;++i){
      cin>>a[i];
   }
   long long int max=0, min=10000000000;
   for(int i=0;i<n;++i){
      if(a[i]>max){
         max=a[i];
      }
      if(a[i]<min){
         min=a[i];
      }
   }
   cout<<max-min<<endl;
 
}
 
int main(){
   
   ios::sync_with_stdio(0);
   cin.tie(0);
   int tt;
   cin>>tt;
   while (tt--)
   {
      solve();
   }
   
   return 0;
}