 #include<bits/stdc++.h>
 using namespace std;

void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr :m){
     cout<<pr.first<<" "<<pr.second<<endl;

    }
}
 int main(){
          map<string,string > m1;
m1["abc"]="abcd"; //s.size(*log(n))
     map<int,string > m;
     m[1]="abc"; //O(logn)
     m[5]="cde";
     m[3]="acd";

     m.insert({4,"afg"});
    //  map<int,string> :: iterator it;
    //  for(it=m.begin();it!=m.end();++it){
    //      cout<<(*it).first<<" "<<(*it).second<<endl;
    //  }
   // m[6]; //O(logn)
   auto it=m.find(3);  //O(logn)
   m.erase(3);  //O(logn)
   m.clear(); 
   if(it==m.end()){
       cout<<"No value";
   }else{
       cout<<(*it).first<<" "<<(*it).second<<endl;   }
    print(m);
     
     
      } 