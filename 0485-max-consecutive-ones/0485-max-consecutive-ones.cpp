class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,cnt=0,maxc=0;
        for(i=0;i<nums.size();i++){
           if(nums[i]==0){
            cnt=0;
           }
           else{
            cnt++;
           }
           maxc=(cnt>maxc)?cnt:maxc;
        }
        return maxc;
    }
};