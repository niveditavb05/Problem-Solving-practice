#include<bits/stdc++.h>
using namespace std;
const int M 1e9+7;
//a^b
//a,b <10^9
//a,b<10^18
//M 10^18 these all are large exp

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
int binexpitr(int a,int b){
    int ans=1;
    while(b>0){
        if(b&1){
            //ans=(ans*1LL*a) %M;
            ans=binmultiply(ans,a);
        }
        //a=(a*1LL*a)%M;
        a=binmultiply(a,a);
        b>>=1;
    }
    return ans;
}//log^2(N)

int binmultiply(long long a,long long b){
int ans=0;
    while(b>0){
        if(b&1){
            ans=(ans+a) %M;
        }
        a=(a+a)%M;
        b>>=1;
    }
    return ans;
} //large datatype  indirect multiplication  

int main(){
    int a=12312,b=13;
    cout<<binexprecur(a,b);
    cout<<binexpitr(a,b);

}