class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i,s=INT_MIN,sum=0;
        for(i=0;i<nums.size();i++){
             sum+=nums[i];
             if(i>=k-1){
                s=max(s,sum);
                sum-=nums[i-k+1];
             }
        }
        return (double)s/k;
    }
};