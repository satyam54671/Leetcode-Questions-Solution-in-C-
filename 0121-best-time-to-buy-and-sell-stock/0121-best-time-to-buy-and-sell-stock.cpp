class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int maxpro = 0;
        int n = nums.size();
        int minprice = INT_MAX;
        for(int i=0; i<nums.size() ; i++){
            minprice = min(minprice,nums[i]);
            maxpro = max(maxpro,nums[i] - minprice);
        }
        return maxpro;
        }
};
