class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for (int i = 0 ; i < n ; ) {
            if (val == nums[i]) {
                nums.erase(nums.begin() + i);
                n--;
            } else i++;
        }
        return n;
    }
};
