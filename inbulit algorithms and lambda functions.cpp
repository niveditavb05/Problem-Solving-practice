#include<bits/stdc++.h>
using namespace std;

int main(){
    auto sum=[](int x,int y){return x+y;}; //lambda functions
    cout<<sum(2,3);
    vector<int> v={2,3,5};
    cout<<all_of(v.begin(),v.end(), [](int x){return x> 0;}); //lambda for positive number
 //all_of returns true if all are positive
     cout<<any_of(v.begin(),v.end(), [](int x){return x> 0;}); //lambda for positive number
 //any_of returns true if any is positive
      cout<<any_of(v.begin(),v.end(), [](int x){return x> 0;}); //lambda for positive number
 //none_of returns true if nothing is positive


}