/*given an integer array nyms of unique elements,return all possible subsets(the poewer set).
the solution set must not contain duplicate subsets,Return the solution in any order
*/

#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;
void generate(vector<int> &subset ,int i,vector<int> &nums){
    //base condition
    if(i==nums.size()){
         subsets.push_back(subset);
         ret urn;
    }


    //i should include or not

    // ith element not in subset
    generate(subset,i+1,nums);

    //ith element in subset
    subset.push_back(nums[i]);
    generate(subset,i+1,nums);
    subset.pop_back(); //backtraking function
}
int main(){
     int n;
     cin>>n;
     vector<int> nums(n);
     for(int i=0;i<n;++i){
        cin>>nums[i];
     }
     vector<int> empty;
     
     generate(empty,0,nums);

     for(auto subset : subsets){
        for(auto ele : subset){
            cout<<ele<<" ";
        }
        cout<<endl;
     }
     }