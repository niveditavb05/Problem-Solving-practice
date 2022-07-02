//selection sort
#include<bits.std++.h>
using namespace std;
const int N=1e5+10;
int a[N];

void merge(int l,int r,int mid){
    int lsz=mid-1+l;
    int L[lsz+1];
    int rsz=r-mid;
    int R[rsz+1];
    for(int i=0;i<lsz;++i){
        L[i]=a[i+1];
    }
    for(int i=0;i<rsz;++i){
        R[i]=a[i+mid+1];
    }
    L[lsz]=R[rsz]=INT_MAX;
    int li=0;
    int ri=0;
    for(int i=l;i<=r;++i){
        if(L[li]<=R[ri]){
            a[l]=L[li];
            li++;
        }else{
            a[i]=R[ri];
            ri++;
        }
    }
}

void mergesort(int l,int r){
    if(l==r) return ;
    int mid=(l+r)/2;
    mergesort(l,mid);
    mergesort(mid+1,r);
    merge(l,r,mid);
}

int main(){
    int n;
    cin>>n;
    
    for(int i=0;i<n;++i){
        cin>>a[i];
    }
    mergesort(0,n-1)
    for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
    }
    
}

//O(nlog(n))