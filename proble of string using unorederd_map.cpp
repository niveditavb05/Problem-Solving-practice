 
 /*
Given N strings ,print unique strings in lexiographical order with their frequency
N <= 10^5
s <= 100 */

#include<bits/stdc++.h>
using namespace std;

int main(){
   unordered_map<string,int> m;
   int n;
   cin>>n;
   for(int i=0;i<n;++i){
       string s;
       cin>>s;
       //m[s]=m[s]+1;
       m[s]++;
   }
   int q;
   cin>>q;
   while(q--){
       string s;
       cin>>s;
       cout<<m[s]<<endl;
   }
}