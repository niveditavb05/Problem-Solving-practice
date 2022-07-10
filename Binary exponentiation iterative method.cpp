#include<bits/stdc++.h>
using namespace std;
const int M 1e9+7;

int binexprecur(int a,int b){
    //base condition
    if(b==0) return 1;
    int   res=binexprecur(a,b/2);
    if(b&1){
       // return a*res*res;
       return (a*((res*1LL*res)%M))%M;
    }else{
        //return res*res;
        return(res*1LL*res)%M;
    }
}
int main(){
    int a=2,b=13;
    cout<<binexprecur(a,b);
   Bi
}