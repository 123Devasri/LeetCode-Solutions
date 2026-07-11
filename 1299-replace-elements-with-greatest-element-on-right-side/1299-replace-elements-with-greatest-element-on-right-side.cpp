class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int i,j=-1;
        for(i=arr.size()-1;i>=0;i--){
          int current = arr[i];
          arr[i]=j;
          j=max(j,current);            
        }
        return arr;
    }
};