class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=2,j=2;
        if(nums.size()<=2)return nums.size();
        while(i<nums.size()){
            if(nums[i]!=nums[j-2]){
                nums[j]=nums[i];
                j++;
            }
            i++;
        }
        return j;
    }
};