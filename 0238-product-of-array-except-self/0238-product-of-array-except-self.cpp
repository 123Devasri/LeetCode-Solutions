class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>ans(nums.size());vector <int> left(nums.size());vector<int>right(nums.size());int i;left[0]=1;right[nums.size()-1]=1;
        for(i=1;i<nums.size();i++){
            left[i]=nums[i-1]*left[i-1];
        }
        for(i=nums.size()-2;i>=0;i--){
            right[i]=nums[i+1]*right[i+1];
        }
        for(i=0;i<nums.size();i++){
            ans[i]=left[i]*right[i];
        }
        return ans;
    }
};