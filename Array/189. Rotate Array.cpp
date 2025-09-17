class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // handle k > n

        // Reverse helper
        auto reverse = [&](int start, int end) {
            while (start < end) {
                swap(nums[start], nums[end]);
                start++;
                end--;
            }
        };

        // Step 1: reverse the whole array
        reverse(0, n - 1);
        // Step 2: reverse the first k elements
        reverse(0, k - 1);
        // Step 3: reverse the remaining elements
        reverse(k, n - 1);
    }
};

