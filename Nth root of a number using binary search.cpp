#include<bits.stdc++.h>
using namespace std;

double eps=1e-6;

double multiply(double mid,int n){
    double ans=1;
    for(int i=0;i<n;++i){
        ans*=mid;
    }
    return ans;
}
int main(){
    double x;
    int n;
    cin>>x>>n;
    double low=1,high=x,mid;
    while(high-lowc > eps){
        mid=(high+low)/2;
        //if(mid*mid < x){
        if(multiply(mid,n) < x){
            low=mid;
        }else{
            high=mid;
        }
    }
    // N*log(N*(10^d))  
    cout<<setprecision(10)<<low<<endl<<high<<endl;
    cout<<pow(x,1.0/n)<<endl;

}