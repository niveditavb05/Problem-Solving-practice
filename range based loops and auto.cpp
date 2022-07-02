 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     vector<int> v={2,3,5,6,7};
     for(int i=0;i<v.size();++i){
         cout<<v[i]<<" ";
     }
     cout<<endl;
     vector<pair<int,int>> vp={{1,2}{2,3},{3,4}};
     vector<pair<int,int>> :: iterator it;
     for(it=vp.begin();it!=vp.end();++it){
         cout<<(*it).first<<" "<<(*it).second<<endl;
     }
     for(it=vp.begin();it!=vp.end();++it){
         cout<<(it->first)<<" "<<it->second)<<endl;
     }
     
     //range based loops
     for(int value :v){ //copy
         cout<<value<<" ";
     }
     cout<<endl;
     for(int &value :v){ //reference
         cout<<value<<" ";
     }

     //auto keywaord
     auto a=1;
     cout<<a<<endl;
     for(auto value :v){ //copy
         cout<<value<<" ";
     }
     //(*it).first <=> (it->first)

      } 