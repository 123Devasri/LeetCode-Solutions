class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total=0,tank=0,start=0,i;
        for(i=0;i<gas.size();i++){
           tank+=gas[i]-cost[i];total+=gas[i]-cost[i];
           if(tank<0){
            start=i+1;
            tank=0;
           }}
        if(total<0)return -1;
        return start;
    }
};