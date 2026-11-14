class Solution {
public:
    void rec(vector<string>&res,int index,string &current,unordered_map<int,string>&mp,string &digits){
        if(index==digits.size()){
            res.push_back(current);
            return;
        }
        for(char ch : mp[digits[index]-'0']){
            current.push_back(ch);
            rec(res,index+1,current,mp,digits);
            current.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>res;
        if(digits.empty())return res;
        unordered_map<int,string>mp;string cur;
        mp[2]="abc";
        mp[3]="def";
        mp[4]="ghi";
        mp[5]="jkl";
        mp[6]="mno";
        mp[7]="pqrs";
        mp[8]="tuv";
        mp[9]="wxyz";
        rec(res,0,cur,mp,digits);
        return res;
    }
};