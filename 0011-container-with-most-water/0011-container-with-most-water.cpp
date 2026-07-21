class Solution {
public:
    int maxArea(vector<int>& height) {
        int width, ht, maxArea = 0;
int left = 0, right = height.size()-1;
while(left < right){
    width = right - left;
    ht = min(height[left], height[right]);
    maxArea = max(maxArea, width * ht);
    if(height[left] < height[right])
        left++;
    else
        right--;
}
   return maxArea;
    }
};