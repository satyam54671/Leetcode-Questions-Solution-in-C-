class Solution {
    public int pivotIndex(int[] nums) {
        int rightSum = 0;

        // Step 1: Total sum
        for(int i = 0; i < nums.length; i++){
            rightSum += nums[i];
        }

        int leftSum = 0;

        // Step 2: Find pivot
        for(int i = 0; i < nums.length; i++){

            rightSum -= nums[i];  // remove current element

            if(leftSum == rightSum){
                return i;  // return index
            }

            leftSum += nums[i];  // add to left
        }

        return -1;
    }
}