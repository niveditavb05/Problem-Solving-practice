#include<bits.stdc++.h>
using namespace std;

void printvec(vector<int> v ){
    cout<<" size"<<v.size()<<endl;
    //v.size()  -> O(1)
    for(int i=0;i<v.size();++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    vector<string> v4;
    vector<int>v1(10);
    vector<int> v2(10,3);

    int n;
    cin>>n;
    for(int i=0;i<n;++i){
int x;
cin>>x;
v.push_back(x);        
    }
    printvec(v); //O(1)
    v.pop_back();
    vector<int> v2=v; //O(n)
        vector<int> &v2=v; //O(n)


}