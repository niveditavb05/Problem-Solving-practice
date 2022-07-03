 #include<bits/stdc++.h>
 using namespace std;

void print(set<string> &s){
    for(stribg value : s){
        cout<<value<<endl;
    }
    }
}
 int main(){
          multiset<string > s;
          s.insert("abc"); //O(logn)
          s.insert("xyz");
          s.insert("asd");
          s.insert("abc");
          auto it=s.find("abc"); //O(logn)
          if(it != s.end()){
              cout<<(*it);
          }
          s.erase("abc");
          s.erase(it)
         // print(s);
     
      } 