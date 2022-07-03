/* balanced brackets matching 

balanced paranthesis string */

#include<bits.stdc++.h>
using namespace std;

unordered_map<char,int> symbols = {{'[',-1},{'(',-2},{'{',-3},{']',1},{')',2},{'}',3}};
string isbalanced(string s){
         stack<char> st;
        //  if(s[i])=='[' || s[i]=='{' || s[i]=='(';
        //  if(s[i]==']')
        for(char bracket : s){
            if(symbols[bracket] <0){
                st.push(bracket);
            }else{
                if(st.empty()) return "NO";
                char top=st.top();
                st.pop();
                if(symbols[top]+symbols[bracket] !=0){
                    return "NO";
                }
            }
        }
        if(st.empty()) return "YES";
        return "NO";
}
int main(){
   
   int t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       string result =isbalnced(s);
       cout<<result<<endl;
   }
   return 0;
   }
