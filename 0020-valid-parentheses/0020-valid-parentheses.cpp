class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char c : s){
            if(c=='(' || c=='{' || c=='[')
            {
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                if(c==')'){
                    char q=st.top();
                    st.pop();
                    if(q!='(') return false;
                }
                else if(c=='}')
                {
                    char q=st.top();
                    st.pop();
                    if(q!='{') return false;
                }
                else{
                    char q=st.top();
                    st.pop();
                    if(q!='[') return false;
                }
            }
        }
        if(st.empty()) return true;
        return false;
    }
};