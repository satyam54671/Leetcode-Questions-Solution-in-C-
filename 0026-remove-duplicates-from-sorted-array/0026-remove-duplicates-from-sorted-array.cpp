class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        if (n == 0) return 0; // Handle empty vector

        int i = 0;
        for (int j = 1; j < n; j++) {
            if (nums[i] != nums[j]) {   // Use nums, not arr
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};
