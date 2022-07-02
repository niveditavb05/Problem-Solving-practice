#include<bits.std++.h>

int digitsum(int n){
    if(n==0) return 0;
    return digitsum(n/10)+(n%10);
}

int main(){
    int n;
    cin>>n;
    
    cout<<digitsum(n);
}

//time complexity is O(logn)