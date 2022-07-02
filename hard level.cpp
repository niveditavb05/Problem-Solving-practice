#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int hsh[N][26];


int main(){
   int t;
   cin>>t;
   while(t--){
       for(int i=0;i<n;++i){
              for(int j=0;j<26;++j){
               hsh[i][j]=0;
           }
           }
       int n,q;
       cin>>n>>q;
       string s;
       cin>>s;
       for(int i=0;i<n;++i){
               hsh[i+1][s[i]-'a']++;
           }
           for(int i=0;i<26;++i){
              for(int j=0;j<=n;++j){
               hsh[j][i]+=hsh[j-1][i];
           }
           }

       while(q--){
           int l,r;
           cin>>l>>r;
           int addct=0;
           for(int i=0;i<26;++i){
              int charct=hsh[r][i]-hsh[l-1][i];
              if(charct%2 !=0) oddct++;
           }
           //int hsh[26];
        //    for(int i=0;i<26;++i){
        //        hsh[i]=0;
        //    }
        //    l--;
        //    r--;
        //    for(int i=0;i<26;++i){
        //        hsh[s[i]-'a']++;
        //    }
        //    int addct=0;
        //    for(int i=0;i<26;++i){
        //       if(hsh[i]%2!=0) oddct++;;
        //    }
           if(oddct>1) cout<<"NO \n";
           else cout<<"YES \n";
       }
   }
}

//O(T*(n +q*(26+n+26)))
//O(t*q*n)=10*10^5*10^5

//O(T*(n +n*26+q*26)
//O(t*n*26)=10*10^5*26