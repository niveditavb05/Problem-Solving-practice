// characters have internally ascii value
 #include<bits/stdc++.h>
 using namespace std;

 void printbinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl; 
 }

 int main(){
       for(int c='A'; c<='Z';++c){
        cout<<c<<endl;  
        printbinary(int(c)); // binary of uppercase 5th bit not set
       }
       for(int c='a'; c<='z ';++c){
        cout<<c<<endl;  
        printbinary(int(c)); // binary of lowercase 5th bit set
       } 
       char c='A';
       char a= A | (1<<5); //capital to small 5th bit set
       cout<<a<<endl;
       cout<<char(a& (~(1<<5)))<<endl;//  small to capital 5th bit unset
       
       cout<<char(1<<5)<<endl; //displays space 
       cout<<char('C'| ' ')<<endl;//displays small c

       printbinary(int('_'));
       cout<<char('c' & '_')<<endl; //displays capital C
       
       char B='B';
       //uppercase to lowercase..
       char b=B | " ";
       cout<<b<<endl;

       //lowercase to uppercase
       char d='d';
       char D=(d & '_');
       cout<<D<<endl;
 }    