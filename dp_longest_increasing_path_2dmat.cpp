#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;

class Solution {
public:
    int helper[200][200];
    int solve(vector<vector<int>>& matrix,int i,int j,int prev){
        int n=matrix.size();
        int m=matrix[0].size();
        if(i<0|| j<0 || i>=n || j>=m||matrix[i][j]<=prev)return 0;
        int val =helper[i][j];
        if (val)return helper[i][j];
        return helper[i][j]=1+max({
            solve(matrix,i+1,j,matrix[i][j]),
            solve(matrix,i,j+1,matrix[i][j]),
            solve(matrix,i-1,j,matrix[i][j]),
            solve(matrix,i,j-1,matrix[i][j])
        });
    }

    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int maxpath=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for (int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                maxpath=max(maxpath,solve(matrix,i,j,-1));
            }
        }

        return maxpath;
        
    }
};

int main() {
    Solution sol;

    // Test case: Longest path is [1, 2, 6, 9] → length = 4
    vector<vector<int>> matrix = {
        {9, 9, 4},
        {6, 6, 8},
        {2, 1, 1}
    };

    int result = sol.longestIncreasingPath(matrix);
    cout << "Longest Increasing Path Length: " << result << endl;

    return 0;
}
