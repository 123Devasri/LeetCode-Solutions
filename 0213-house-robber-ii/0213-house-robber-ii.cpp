class Solution {
public:
    int rec(vector<int>&nums,int start,int end){
        int prev1=0,prev2=0;
        for(int i=start;i<=end;i++){
           int cur=max(prev2+nums[i],prev1);
           prev2=prev1;
           prev1=cur;
        }
        return prev1;
    }
    int rob(vector<int>& nums) {
       int n=nums.size();
       if(n==1)return nums[0];
       return max(rec(nums,0,n-2),rec(nums,1,n-1));
    }
};