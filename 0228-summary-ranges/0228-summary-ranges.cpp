class Solution {
public:
    vector<string> summaryRanges(vector<int>& num) {
        int n = num.size();
        vector<string>ans;
        for(int i = 0;i<n;i++){
            int start = num[i];
            while(i+1<n && num[i]+1 == num[i+1]){
                i++;
            }
            if(start != num[i]) {
                ans.push_back(to_string(start) +"->"+ to_string(num[i]));
            }
            else{
            ans.push_back(to_string(start));
            }
        }
        return ans;
        
    }
};