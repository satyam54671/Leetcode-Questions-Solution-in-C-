class Solution {
    public List<List<Integer>> subsetsWithDup(int[] nums) {
        Arrays.sort(nums);
        List<List<Integer>> allSubsets = new ArrayList<>();
        backtrack(nums,0,new ArrayList<>(),allSubsets);
        return allSubsets;
        
    }
    private void backtrack(int[] nums,int index, List<Integer> current, List<List<Integer>> allSubsets){
        if(index == nums.length){
            allSubsets.add(new ArrayList<>(current));
            return;
        }

        current.add(nums[index]);
        backtrack(nums,index+1,current,allSubsets);
        current.remove(current.size() - 1);
        int idx = index+1;
        while(idx < nums.length && nums[idx] == nums[idx-1]){
            idx++;
        }
        backtrack(nums,idx,current,allSubsets);
    }
}