#include<bits/stdc++.h>
#include <iostream>
using namespace std;

void sum(int arr[],int &ans,int i,int n){
    if(i==n){
        return ;
    }
    ans+=arr[i];
    sum(arr,ans,i+1,n);
}
int main(){
    int n=6;
    int arr[n]={1,1,1,1,1,5};
    int i=0, ans=0;
    sum(arr,ans,0,n);
    cout<<"ANS:"<<ans;
    
    return 0;
}
