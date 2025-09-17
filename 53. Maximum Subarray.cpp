class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];      // maximum subarray sum so far
        int currentSum = nums[0];  // max subarray sum ending at current index

        for (int i = 1; i < nums.size(); i++) {
            currentSum = max(nums[i], currentSum + nums[i]);
            maxSum = max(maxSum, currentSum);
        }

        return maxSum;
    }
};
