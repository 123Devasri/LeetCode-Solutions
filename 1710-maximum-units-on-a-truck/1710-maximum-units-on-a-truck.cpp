class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int max=0;
        sort(boxTypes.begin(),boxTypes.end(),[](vector<int>&a,vector<int>&b){
            return a[1]>b[1];
        });
        for(int i=0;i<boxTypes.size();i++){
            if(boxTypes[i][0]<truckSize){
                max+=(boxTypes[i][1]*boxTypes[i][0]);
                truckSize-=boxTypes[i][0];
            }
            else{
                max+=(truckSize*boxTypes[i][1]);
                break;
            }
        }
        return max;
    }
};