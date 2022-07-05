//given n pairs of parentheses ,write a function to generate all combinations of well-formed parentheses
//advanced recursion
//backtracking concept
//backtracking menas recursion

#include<bits/stdc++.h>
using namespace std;

vector<string> valid;
void genrate(string &s,int open,int close){
    if(open== 0 && close ==0){ //if both are consumed open and close
          valid.push_back(s);
          return;
    }
    if(open > 0){ //for opening
        s.push_back('(');
        generate(s,open-1,close);
        s.pop_back(); //for backtracking want to work on original string so popback for further closing insertion backets
    }
    if(close > 0){ //for closiing
        if(open < close){//in string open>close and remaining open<close
            s.push_back(')');
            generate(s,open,close-1);
            s.pop_back();

        }
    }
}
int main(){
    generate(s,n,n);
}