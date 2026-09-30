class Solution {
public:
    int maximumSum(vector<int>& arr) {
        int normal = arr[0];
        int deleted = INT_MIN;
        int ans = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            int x = arr[i];
            int newDeleted = normal;  
            if (deleted != INT_MIN)
                newDeleted = max(newDeleted, deleted + x);
            int newNormal = max(x, normal + x);
            normal = newNormal;
            deleted = newDeleted;
            ans = max({ans, normal, deleted});
        }

        return ans;
    }
};