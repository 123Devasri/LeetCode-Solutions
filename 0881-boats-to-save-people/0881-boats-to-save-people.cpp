class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int boat=0,left=0,right=people.size()-1;
        while(left<=right){
            int tot_weight=people[left]+people[right];
            if(tot_weight<=limit){
                left++;right--;
            }
            else{
                right--;
            }
            boat+=1;
        }
        return boat;
    }
};