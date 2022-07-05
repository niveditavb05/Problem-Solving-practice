//SPOJ.com  EKO prblem
#include<bits/stdc++.h>
using namespace std;
const int N= 1e6+10;
int n;
long long m;
long long trees[N];

bool iswiidsufficient(int h){
    long long wood=0;
    for(int i=0;i<n;++i){
        if(trees[i] >= high){
            wood+=(trees[i]-h);
        }
    }
    return wood >= m;
}

int main(){
    cin>>n>>m;
    for(int i=0i<n;++i){
        cin>>trees[i];
    }
    long long low=0;high=1e9,mid;
    //T T T T T F F F
    while(high-low >1){  //O(logn) loop
        mid=(high+low)/2;
        if(iswoodsuffiecient(mid)){ //O(n) function call)
            low=mid;
        }else{
            high=mid-1;
        }

    }
    if(iswoodsuffiecient(high)){
        cout<<high<<endl;
    }else{
        cout<<low<<endl;
    }

}
//TC : I(N log(h))