#include<bits/std++.h>

int fact(int n){
    if(n==0) return 1;
    for(int i=0;i<n;++i);
    return fact(n-1)*n;
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
}

//1.number of function call ->n
//2.what is complexity of each function ->O(1)
//O(n^2)