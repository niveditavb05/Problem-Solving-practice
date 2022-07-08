  #include<bits/stdc++.h>
  using namespace std;

  int gcd(int a,int b){
    //base condition
    // if(a%b==0){
    //     return b;
    // }
    if(b==0) return a;
    //a%b
    return gcd(b,a%b);

  } //log(n)

  int main(){
    cout<<gcd(12,4)<<endl; //doesnt matter whichever lagrg number it gives same result
    cout<<gcd(18,12)<<endl;  
    cout<<12*18/gcd(12,18)<<end; // to find LCM
    cout<<__gcd(12,18)<<endl; //builtin function //log(n)
   //gcd(gcd(a,b),c) gcd of three numbers
    } 