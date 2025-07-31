// You are given an integer array coins representing coins of different denominations and an integer amount representing a total amount of money.

// Return the fewest number of coins that you need to make up that amount. If that amount of money cannot be made up by any combination of the coins, return -1.

// You may assume that you have an infinite number of each kind of coin.

 

// Example 1:

// Input: coins = [1,2,5], amount = 11
// Output: 3
// Explanation: 11 = 5 + 5 + 1
// Example 2:

// Input: coins = [2], amount = 3
// Output: -1
// Example 3:

// Input: coins = [1], amount = 0
// Output: 0

#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>&coins,int x){
    if(x==0)return 0;
    if(x<0)return INT_MAX;

    int mini=INT_MAX;
    for(int i=0;i<coins.size();i++){
        int ans=solve(coins,x-coins[i]);
        if(ans!=INT_MAX)
            mini=min(mini,1+ans);
    }
    return mini;

}

int coinchange(vector<int>coins,int amount){
    int ans=solve(coins,amount);
    if(ans==INT_MAX)return -1;
    return ans;
}
int main(){
    vector<int>coins={2,10,4};
    int amount=49;
    int ans=coinchange(coins,amount);
    cout<<"Coins:"<<ans;
    return 0;
}