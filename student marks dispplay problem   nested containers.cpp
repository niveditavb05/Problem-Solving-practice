 //print the highest marks with thier name 
 //if same marks then print in lexiographical order

 #include<bits/stdc++.h>
 using namespace std;

 int main(){
     map<int,multiset<string>> marks_map; //multiset required if same name is present
     int n;
     cin>>n;
     for(int i=0;i<n;++i){
         int marks;
         string name;
         cin>>name>>marks;
         // marks_map[marks].insert(name);
         marks_map[-1*marks].insert(name);
     }
    //  auto cur_it=--marks_map.end();
    //  while(true){
    //      auto &students=(*cur_it).second;
    //      int marks=(*cut_it).first;
    //      for(auto student : students){
    //          cout<<student<<" "<< marks<<endl;
    //      }
    //      if(cur_it==marks_map.begin())
    //      break;
    //      cur_it--;
    //  }
    for(auto &marks_students_pr : marks_map){
     auto &students=marks_students_pr.second;
          int marks=marks_students_pr.first;
         for(auto student : students){
             cout<<student<<" "<<-1* marks<<endl;
         } 

 }