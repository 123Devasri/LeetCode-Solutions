
class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        stringstream ss(path);
        string dir;
        while (getline(ss, dir, '/')) {
            if (dir.empty() || dir == ".") {
                continue;
            }
            else if (dir == "..") {
                if (!st.empty()) {
                    st.pop();
                }
            }
            else {
                st.push(dir);
            }
        }
        string ans = "";
        while (!st.empty()) {
            ans = "/" + st.top() + ans;
            st.pop();
        }
        if (ans.empty()) {
            return "/";
        }
        return ans;
    }
};
