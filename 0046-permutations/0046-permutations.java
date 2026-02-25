import java.util.*;

class Solution {
    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> ans = new ArrayList<>();
        getperm(nums, 0, ans);
        return ans;
    }

    private void getperm(int[] nums, int index, List<List<Integer>> ans) {

        if (index == nums.length) {
            List<Integer> temp = new ArrayList<>();
            for (int i = 0; i < nums.length; i++) {
                temp.add(nums[i]);
                }
            ans.add(temp);
            return;
        }

        for (int i = index; i < nums.length; i++) {
            swap(nums, index, i);          
            getperm(nums, index + 1, ans); 
            swap(nums, index, i);          
        }
    }

    private void swap(int[] nums, int i, int j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
    }
}