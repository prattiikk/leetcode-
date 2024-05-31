// https://leetcode.com/problems/pascals-triangle/
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        ans.push_back({1});
        if(numRows == 1)return ans;
        ans.push_back({1,1});
        if(numRows == 2)return ans;
        for(int i=2; i<numRows; i++){
            int p1 = 0, p2=1;
            vector<int>temp;
            temp.push_back(1);
            while(p2 < ans[i-1].size()){
                int sum = ans[i-1][p1++] + ans[i-1][p2++];
                temp.push_back(sum);
            }
            temp.push_back(1);
            ans.push_back(temp);
        }
        return ans;
    }
};
