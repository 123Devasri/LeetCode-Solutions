class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int i=0,j=nums.size()-1,k=nums.size()-1;vector<int>Ans(nums.size(),0);
while(i<=j){
       if(nums[i]*nums[i] < nums[j]* nums[j]){
              Ans[k]=nums[j]*nums[j];j--;k--;
       }
        else{
                        Ans[k]=nums[i]*nums[i];i++;k--;
          }
}
return Ans;
 
    }
};