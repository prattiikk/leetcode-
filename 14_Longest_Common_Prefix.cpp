class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        for(int i=1; i<strs.size(); i++){
            string curr = strs[i];
            int j=0;
            while( j<ans.size() and j<curr.size() and ans[j]==curr[j])++j;
            ans = ans.substr(0,j);
            if(ans.size() == 0)return "";
        }
        return ans;
    }
};
