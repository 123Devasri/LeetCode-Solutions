class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int j=1;sort(nums.begin(),nums.end(),greater<int>());
        for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[i-1]){
            j++;
          }
          if(j==3){
            return nums[i];
          }
        }
        return nums[0];
    }
};