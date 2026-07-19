class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int length=1,j=1,i=0;
for(i=0;i<nums.size()-1;i++){
      if(nums[i]<nums[i+1]){
        j+=1;
        }
        else{
          j=1;
       }
       length=(length>j)?length:j;
}
return length;
    }
};