class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas = 0, totCost = 0;
        int Start = 0 , currGas = 0;
for(int i =0 ; i<gas.size() ; i++){
        totGas += gas[i];
        totCost += cost[i];
        currGas += (gas[i] - cost[i]);

        if(currGas < 0){
            Start = i+1;
            currGas = 0;

        }
}
    return totGas < totCost? -1 : Start;
    }
};