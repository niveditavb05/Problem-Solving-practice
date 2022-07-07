//XOR operator

 #include<bits/stdc++.h>
 using namespace std;
         
 
 int main(){
      int a=4,b=6;
      a=a^b;
      b=b^a;  //b --> a
      //b=b^(a^b)

      //x^y^z=x^z^y==y^x^z

      //b=b^(a^b)==b^b^a

      a=a^b; //a-->b
      //a=(a^b)^a ==> a^a^b --> b       
 }