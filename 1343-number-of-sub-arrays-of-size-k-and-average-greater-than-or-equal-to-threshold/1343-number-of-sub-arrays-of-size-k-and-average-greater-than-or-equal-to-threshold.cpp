class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int cnt=0,sum=0,i;
        for(i=0;i<arr.size();i++){
            sum+=arr[i];
            if(i>=k-1){
               if(sum>=threshold*k)cnt++;
               sum-=arr[i-k+1];
            }
        }
        return cnt;
    }
};