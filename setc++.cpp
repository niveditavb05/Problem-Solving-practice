 #include<bits/stdc++.h>
 using namespace std;

void print(set<string> &s){
    for(stribg value : s){
        cout<<value<<endl;
    }
    for(auto it=s.begin();it!=s.end();++it){
        cout<<(*it)<<endl;
    }

    }
}
 int main(){
          set<string > s;
          s.insert("abc"); //O(logn)
          s.insert("xyz");
          s.insert("asd");
          auto it=s.find("abc"); O(logn)
          if(it != s.end()){
              cout<<(*it);
          }
          s.erase("abc");
          s.erase(it)
         // print(s);
     
      } 