//XOR operator

 #include<bits/stdc++.h>
 using namespace std;
         /* 
         Given array a if n integers. All integers are present inevent count exceot one.
         find that one integer which has odd count in O(N) time complexity and O(1) space;
         N < 10^5
         a[i] < 10^5
          */

 int main(){
      // c^ a ^ b ^ c ^ d   -->c^ a^c^b^b -->c^a^c -->a
      //same numbers xor will give 0 
      int n;
      cin>>n;
      int x;
      int ans=0;
      for(int i=0;i<n;++i){
        cin>>x;
        ans^=x;
      }
      cou<<ans<<endl;

 }