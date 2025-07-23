#include<bits/stdc++.h>
using namespace std;

void matrixTraversal(vector<vector<int>>&mat,vector<int>&ans){
    int left=0;
    int right=mat[0].size()-1;
    int bottom=mat.size()-1;
    int top=0;
    
    while(left<=right && top<=bottom){
        //left to right
        for(int i=left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;
        //top to bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }
        right--;
        if(left<=right){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(top<=bottom){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }

    }
    return;
}
int main(){
    vector<vector<int>>mat={{2,3,4,5},{4,7,8,9},{10,1,4,8},{3,4,5,6}};
    vector<int>ans;
    matrixTraversal(mat,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}