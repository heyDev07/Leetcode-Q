class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.size();
        if(n==0) return 0;
        int ans=1;
        int j=0;
        unordered_set<char>st;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
            }
            else{
                while(s[j]!=s[i]){
                    st.erase(s[j]);
                    j++;
                }
                st.erase(s[j]);
                j++;
                st.insert(s[i]);
            }
            ans=max(ans,(int)st.size());
        }
         ans=max(ans,(int)st.size());
        return ans;
    }
};