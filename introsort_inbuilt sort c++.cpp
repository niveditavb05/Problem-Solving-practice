
//inbuilt sorting algorithms
 #include<bits/stdc++.h>
 using namespace std;

 int main(){
      int n;
      cin>>n;
      //int a[n];
      vector<int> a(n);
      for(int i=0;i<n;++i){
        cin>>a[i];
      }
     // sort(a,a+n );
    // sort(a+2,a+n ); //O(n(logn)) 
     // sort(a,a+3 );
     sort(a.begin()+2,a.end());
      for(int i=0;i<n;++i){
        cout<<a[i]<<" ";
      }
      cout<<endl;
      } 