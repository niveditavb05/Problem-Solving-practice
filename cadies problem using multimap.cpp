// n bag every bage n candies as he eats x/2 adds
//determine max candies he can eat
 #include<bits/stdc++.h>
 using namespace std;

void print(set<string> &s){
    for(stribg value : s){
        cout<<value<<endl;
    }
    }
}
 int main(){
          int t;
          cin>>t;
          while(t--){
              int n,k;
              cin>>n>>k;
              multiset<long long> bags;
              for(int i=0;i<n;++i){
                  long long candy_ct;
                  cin>>candy_ct;
                  bags.insert(candy_ct);
              }
              long long tatal_candies=0;
              for(int i=0;i<k;++i){
                  auto last_it=(--bags.end());
                  long long candy_ct=*last_it;
                  tatal_candies+=candy_ct;
                  bags.erase(it);
                  bags.insert(candy_ct/2);
              }
              cout<<tatal_candies<<endl;    
          }
     
      } 