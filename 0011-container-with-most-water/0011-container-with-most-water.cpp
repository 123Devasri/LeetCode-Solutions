class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0,right=height.size()-1;int m=0;
        while(left<right){
            int width=right-left;
            int h=min(height[left],height[right]);
            int area=width*h;
             m= (m>area)?m:area;
             if(height[left]<height[right]){
                left++;
            }
            else
               right--;
        }
        return m;
    }
};