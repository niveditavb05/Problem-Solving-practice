//pre computation tachniq
#include<bits/stdc++.h>
using namespace std;
const int M=1e9+7;
const int N=1e5+10;
long long fact[N];

int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<n;++i){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<fact[n]<<endl;
    }
}

//o[T*N]=10^10 OLD
//o(N)+o(T)=10^5+10^5