class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i,j=0,sum=0,minsize=INT_MAX;
        for(i=0;i<nums.size();i++){
            sum+=nums[i];
            while(sum>=target){
                minsize=min(minsize,i-j+1);
                sum-=nums[j];
                j++;
            }
        }
        if(minsize==INT_MAX)
             return 0;
        else{
            return minsize;
        }
    }
};