class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five_count=0,ten_count=0;
        for(int i=0;i<bills.size();i++){
            if(bills[i]==5){
                five_count+=1;
            }
            else if(bills[i]==10){
                if(five_count>0){
                  five_count-=1;
                  ten_count+=1;
                }
                else{
                    return false;
                }
            }
            else{
                if(five_count>0 && ten_count>0){
                       five_count-=1;
                       ten_count-=1;
                }
                else if(five_count>=3){
                   five_count-=3;
                } 
                else{
                    return false;
                }
            }
          }
        return true;
    }
};