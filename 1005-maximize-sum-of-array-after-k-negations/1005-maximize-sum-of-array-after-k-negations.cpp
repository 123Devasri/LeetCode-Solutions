class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());int sum=0;
        for(int i=0;i<nums.size()&&k>0;i++){
            if(nums[i]<0){
                nums[i]=-nums[i];
                k--;
            }
        }
        if(k%2==1){
           int idx=min_element(nums.begin(),nums.end())-nums.begin();
           nums[idx]=-nums[idx];
        }
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
    }
};