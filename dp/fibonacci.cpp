#include <bits/stdc++.h>
using namespace std;

int solve(int  n){
    vector<int>dp(n+1,-1);
    if(n==0 || n==1)return n;
    if(dp[n]!=-1)return dp[n];
    dp[n]=solve(n-1)+solve(n-2);
    return dp[n];
}
int main(){
    int ans=solve(5);
    cout<<"ans:"<<ans;
    return 0;
}