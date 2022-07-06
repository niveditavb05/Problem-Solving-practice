 #include<bits/stdc++.h>
 using namespace std;

 void printbinary(int num){
    for(int i=10;i>=0;--i){
        cout<<((num>>i)&1);
    }
    cout<<endl; 
 }

 int main(){
        printbinary(9);
        int a=9;
        int i=0; //bit to check
        if((a&(1<<i)) !=0){
            cout<<"set bit";
        }else{
            cout<<"not set bit";
        }
        //bit set
        printbinary(a | (1<<1));

        printbinary(~a);
        //bit unset
        printbinary(a&(~(1<<3)));

        //toggle
        printbinaey(a^(1<<2));
        printbinaey(a^(1<<3));

        //bit count =calculates set bits
        int ct=0;
        for(int i=31;i>=0;--i){
            if((a&(1<<i)) != 0){
                ct++;
            }
        }
        cout<<ct<<endl;

        cout<<__builtin_popcount(a)<<endl;
        cout<<__builtin_popcountll((1LL<<35)-)<<endl;   
 }