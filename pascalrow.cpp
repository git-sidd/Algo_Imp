#include<bits/stdc++.h>
using namespace std;

vector<int> printRow(int n){
    vector<int>ans;
    int res=1;
    for(int col=0;col<=n;col++){
        ans.push_back(res);
        res=res*(n-col)/(col+1);
    }
    return ans;
}
int main(){
    int n=3;
    vector<int>ans=printRow(n-1);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}