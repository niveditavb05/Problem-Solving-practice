 #include<bits/stdc++.h>
 using namespace std;
         
 void printbinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl; 
 }
        
 int main(){
       printbinary(59); //00000111011
       int a=59;
       int i=4;
       int b=(a& (~((1<<(i+1))-1)));
       printbinary(b);
       i=3;
       int c=(a&((1<<(i+1))-1));
       printbinary(c);
       int n=15;
       cout<<(n&(n-1));  
       if(n&(n-1)){
        cout<<"not power of 2";
       }else{
        cout<<"power of 2";
       }
       
 }