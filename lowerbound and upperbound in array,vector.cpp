 #include<bits/stdc++.h>
 using namespace std;
 int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    int a[n];
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    sort(a,a+n);
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
    int *ptr=lower_bound(a,a+n,26);//O(logn)
    int *ptr=upper_bound(a,a+n,5);//O(logn)
    if(ptr==(a+n)){
        cout<<"NOT FOUND";
        return 0;
    } 
    cout<<(*ptr)<<endl;

     sort(a.begin(),a.end());
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    cout<<endl; 
   auto it=lower_bound(a.begin(),a.end(),26);//O(logn)
    auto it=upper_bound(a.begin(),a.end(),26);//O(logn)
    if(it==(a.end())){
        cout<<"NOT FOUND";
        return 0;
    } 
    cout<<(*it)<<endl;
 }