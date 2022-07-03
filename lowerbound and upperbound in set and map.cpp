 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n; 
    set<int> s;
   
    for(int i=0;i<n;++i){
        int x;
        s.insert(x);
    }
    for(int i=0;i< (int)1e5 ;++i){
        auto it=s.lower_bound(rand());
    }
    cout<<(*it)<<endl;
 }