class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n;) {
                if (nums[i] == nums[j]) {
                    nums.erase(nums.begin() + j);

                    n--;

                } else {
                    j++;
                }
            }
        }
        return n;
    }
};
