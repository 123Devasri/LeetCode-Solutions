class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        int i;long long total_waiting=0;long long finish=0;
        for(i=0;i<customers.size();i++){
           finish=max((long long)customers[i][0],finish)+customers[i][1];
           total_waiting+=finish-customers[i][0];
        }
        return (double)total_waiting/customers.size();
    }
};