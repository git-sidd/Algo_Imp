#include <vector>
#include <iostream>


class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& nums) {
        int PL = 1;
        int PR = 1;
        int n = nums.size();
        std::vector<int> ans(n, 0);
        // left->right;
        for (int i = 0; i < n; i++) {
            ans[i] = PL;
            PL = PL * nums[i];
        }
        //right->left
        for (int i = n - 1; i >= 0; i--) {
            ans[i] = ans[i] * PR;
            PR = PR * nums[i];
        }
        return ans;
    }
};

int main() {
    std::vector<int> nums = {1, 2, 3, 4};
    Solution sol;
    std::vector<int> result = sol.productExceptSelf(nums);

    for (int val : result) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
    return 0;
}