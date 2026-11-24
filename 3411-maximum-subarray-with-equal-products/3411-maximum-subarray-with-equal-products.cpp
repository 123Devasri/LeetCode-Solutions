class Solution {
public:
    int maxLength(vector<int>& nums) {
        int cnt=0;
        for(int i=0;i<nums.size();i++){
            long long l=1,g=0,product=1;
            for(int j=i;j<nums.size();j++){
                if(product>LLONG_MAX/nums[j]){
                    break;
                }
               product*=nums[j];
               l=lcm(l,(long long) nums[j]);
               g=gcd(g,(long long) nums[j]);
               if(product==l*g){
                cnt=max(cnt,j-i+1);
               }
            }
        }
        return cnt;
    }
};