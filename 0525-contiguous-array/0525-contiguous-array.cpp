class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int i,j=0,maxlen=0;unordered_map<int,int>mp;
        for(i=0;i<nums.size();i++){
            if(nums[i]==0)nums[i]=-1;
        }
        mp[0]=-1;
        for(i=0;i<nums.size();i++){
            j+=nums[i];
            if(mp.count(j)){
                maxlen=max(maxlen,i-mp[j]);
            }
            else{
                mp[j]=i;
            }
        }
     return maxlen;
    }
};