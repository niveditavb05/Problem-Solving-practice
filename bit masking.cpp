 #include<bits.stdc++.h>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    vector<int> masks(n,0);
    for(int i=0;i<n;++i){
        int numworkers;
        cin>>numworkers;
        int mask=0;
        for(int j=0;j<numworkers;++j){
            int day;
            cin>>day;
            mask=(mask | (1<<day));
            //days[i].push_back(day);
        }
        masks[i]=mask;
    }
    int max_days=0;
    int person1=-1;
    int person2=-1;
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            int intersection=(masks[i] & masks[j]);
            int commondays=__builtin_popcount(intersection);
            if(commondays > max_days){
                max_days=commodays;
                person1=i;
                person2=j;
            }
          //  cout<<i<<" "<<j<<commondays<<endl;
           // max_days=max(max_days,commondays); 
        }
    }
    //cout<<max_days<<endl;
    cout<<person1<<" "<<person2<<" "<<max_days<<endl;
        //O(N^2 *30) //30 for intersection
 }