#include<bits.stdc++.h>
using namespace std;

int main(){
   stack<int> s;
   s.push(2);
   s.push(2);
   s.push(4);
   s.push(6);
   while(!s.empty()){
       cout<<s.top()<<endl;
       s.pop();
   }
}