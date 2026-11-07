class Solution {
public:
    long long mod = 1e9+7;
    long long power(long long x, long long n) {
        long long ans = 1;
        while(n > 0) {
            if(n % 2 == 1)
                ans = (ans * x) % mod;
            x = (x * x) % mod;
            n /= 2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        return (power(5, (n+1)/2) *
                power(4, n/2)) % mod;
    }
};