#include<bits/stdc++.h>
using namespace std;
const int M 1e9+7;

b<= 10^9
b<=10^18

int binexpitr(int a,long long b,int m){
    int ans=1;
    while(b>0){
        if(b&1){
            ans=(ans*1LL*a) %M;
        }
        a=(a*1LL*a)%M;
        b>>=1; //division
    }
    return ans;
} //log(b)

int main(){
    //50^64^32
    cout<<binexpitr(50,binexp(64,32,M-1,M)  );

} 