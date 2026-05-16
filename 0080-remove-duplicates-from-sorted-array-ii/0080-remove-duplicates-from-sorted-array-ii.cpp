class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       int i,j;
        if(nums.size()<=2)return nums.size();
        i=2;
        for(j=2;j<nums.size();j++){
            if(nums[j]!=nums[i-2]){
                nums[i]=nums[j];
                i++;
            }
        }
        return i;
    }
};