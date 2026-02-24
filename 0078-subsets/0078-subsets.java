import java.util.*;

class Solution {

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> allSubsets = new ArrayList<>();
        List<Integer> current = new ArrayList<>();
        
        backtrack(nums, 0, current, allSubsets);
        return allSubsets;
    }

    private void backtrack(int[] nums, int index,List<Integer> current,List<List<Integer>> allSubsets) {

        if (index == nums.length) {
            allSubsets.add(new ArrayList<>(current));
            return;
        }

        current.add(nums[index]);
        backtrack(nums, index + 1, current, allSubsets);

        current.remove(current.size() - 1);

        backtrack(nums, index + 1, current, allSubsets);
    }
}