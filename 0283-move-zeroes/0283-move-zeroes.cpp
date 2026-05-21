class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int first=0,second=0;int n=nums.size();
        while(second < nums.size()){
            if(nums[second]!=0){
                nums[first]=nums[second];first++;
            }
           second++;
        }
        while(first<nums.size()){
            nums[first]=0;
            first++;
        }
    }
};