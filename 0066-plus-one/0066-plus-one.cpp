class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
int i=digits.size()-1,j=0;
while(i>=0){
      if(digits[i]<9){
        digits[i]=digits[i]+1;return digits;
}
   if(digits[i]==9){
         digits[i]=0;
          i--;
 }
}
digits.insert(digits.begin(),1);
return digits;
    }
};