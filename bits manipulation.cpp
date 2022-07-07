 #include<bits/stdc++.h>
 using namespace std;

 void printbinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl; 
 }

 int main(){
       for(int i=0;i<8;++i){
        printbinary(i);
        if(i&1){
            cout<<"Odd \n";
        }else{
            cout<<"even\n";
        }
       }

       int n=5;
       cout<<(n>>1)<<endl;// *2
       cout<<(n<<1)<<endl;// /2
       (high+low)>>1;
      
      
 }