#include <bits/stdc++.h>
using namespace std;

int solve(int n){
    if (n==0)return 0;
    if (n==1)return 1;

    return (solve(n-1)+solve(n-2));

}
int main(){
    int ans=solve(4);
    cout<<ans<<": ans"<<endl;
    return 0;
}