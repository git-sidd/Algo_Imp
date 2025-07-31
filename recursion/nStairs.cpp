//you can take either 1 stair or 2 stair to reach the nth stair:

#include<bits/stdc++.h>
using namespace std;

int solve(int n,int i){
    
    if(i==n)return 1;
    if (i>n)return 0;

    return solve(n,i+1)+solve(n,i+2);
}

int main(){
    int n=10;
    int ans=solve(n,0);
    cout<<"ANS:"<<ans;
    return 0;
}