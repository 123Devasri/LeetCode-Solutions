class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>square(nums.size());int i=nums.size()-1,left=0,right=nums.size()-1;
        while(left<=right){
            int large= max(abs(nums[left]),abs(nums[right]));
            square[i]=large*large;i--;
            if(abs(nums[left])>abs(nums[right]))left++;
            else right--;
        }
        return square;
    }
};