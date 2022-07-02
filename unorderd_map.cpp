 #include<bits/stdc++.h>
 using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr :m){
     cout<<pr.first<<" "<<pr.second<<endl;

    }
}
 int main(){
          unordered_map<string,string > m1;
m1["abc"]="abcd"; 
     unordered_map<int,string > m;
     m[1]="abc"; //O(1)
     m[5]="cde";
     m[3]="acd";

     m.insert({4,"afg"});
   // m[6]; 
   auto it=m.find(3);  //O(1)
   m.erase(3);  //O(1 )
   m.clear(); 
   if(it==m.end()){
       cout<<"No value";
   }else{
       cout<<(*it).first<<" "<<(*it).second<<endl;   }
    print(m);
     
     
      } 