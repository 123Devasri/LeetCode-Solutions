class Solution {
public:
    void reverseString(vector<char>& s) {
        int right=s.size()-1;char temp;int left=0;
        while(left<right){
          temp=s[left];
          s[left]=s[right];
          s[right]=temp;
          left++;right--;
        }
    }
};