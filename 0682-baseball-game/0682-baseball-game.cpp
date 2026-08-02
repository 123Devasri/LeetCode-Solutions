class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;int i=0,sum=0,s=0,t;
        while(i<operations.size()){
            if(operations[i]=="C"&&!st.empty()){
               st.pop();
            }
            else if(operations[i]=="D"){
                s=st.top()*2;
                st.push(s);
            }
            else if(operations[i]=="+"){
                s=st.top();st.pop();t=st.top();st.push(s);
                st.push(s+t);
            }
            else{
                st.push(stoi(operations[i]));
            }
            i++;
        }
        while(!st.empty()){
           sum+=st.top();
           st.pop();
        }
        return sum;
    }
};