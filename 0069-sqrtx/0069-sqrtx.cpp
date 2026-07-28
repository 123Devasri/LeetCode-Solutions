class Solution {
public:
    int mySqrt(int x) {
        int left=0,right=x,mid;
        while(left<=right){
            mid=left+(right-left)/2;
            long long pro=1LL*mid*mid;
            if(pro==x)return mid;
            else if(pro>x)right=mid-1;
            else{
                left=mid+1;
            }
        }
        return right;
    }
};