class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long cnt=0,ans=0;int i;
        for(i=0;i<nums.size();i++){
            if(nums[i]!=0){
                cnt=0;
            }
            else{
                cnt++;
                ans+=cnt;
            }
        }
        return ans;
    }
};