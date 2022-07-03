 //these all functions are O(n) and same works for both array and vector
 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n; 
   vector<int> v(n);
   
    for(int i=0;i<n;++i){
       cin>>v[i];
    }
    int min=*min_element(v.begin(),v.end()); //O(n)
    cout<<min<<endl;
    int max=*max_element(v.begin(),v.end());//O(n)
    cout<<max<<endl;
    int sum=accumulate(v.begin(),v.end(),0);//O(n)
    cout<<sum<<endl;
    int ct=count(v.begin(),v.end(),6);//O(n)
    cout<<ct<<endl;
    auto it=find(v.begin(),v.end(),10);//O(n)
    if(it != v.end())
       cout<<*it<<endl;
    else
       cout<<"not found"<<endl;
    reverse(v.begin(),v.end());//O(n)
    for(auto val :v){
        cout<<val<<" ";
    }
    cout<<endl;
    string s="abchfefdfdvf";
    reverse(s.begin(),s.end());//O(n)
    cout<<s<<endl;
 }