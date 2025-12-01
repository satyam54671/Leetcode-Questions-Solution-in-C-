class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        vector<int> temp(arr.size(),0);
        int index = 0;
        for (int i = 0 ; i<arr.size() ; i++){
            if(arr[i] != 0){
                temp[index] = arr[i];
                index++;
            }
        }
        for(int i = 0 ; i<arr.size();i++){
            arr[i] = temp[i];
        }
    }
};