#include<bits/stdc++.h>
using namespace std;
const int N =1e5+10;
int n,cows;
int positions[N];

bool canplacecows(int mindist){
    int lastpos = -1;
    int cows_ct=cows;
    for(int i=0;i<n;++i){
        if(positions[i] - lastpos >= mindist || lastpos==-1){
            cows_ct--;
            lastpos=positions[i];
        }
        if(cows_ct==0)  break;

    }
    return cows_ct==0;

}

int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>cows;
        for(int i=0;i<n;++i){
            cin>>positions[i];
        }
        sort(positions,positions+n); //Nlog(n)
        //TTTTFFFF
        int low=0;high=1e9,mid;
        while(high-low>1){
            mid=(low+high)/2;
            if(canpalcecows(mid)){
                low=mid;
            }else{
                high=mid-1;
            }
        } //log(10^9)*O(n)=TC :- O(n*log(n))
        if(canplacecows(high)){
            cout<<high<<ednl;
        }else{
            cout<<low<<endl;
        }
    }

}