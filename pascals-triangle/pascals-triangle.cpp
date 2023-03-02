class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> v;
        v.push_back(1);
        ans.push_back(v);
        v.clear();
        if (numRows == 1)
            return ans;
        for (int i = 1; i < numRows; i++)
        {
            for (int j = 0; j < i + 1; j++)
            {
                if (j == 0 || j == i)
                    v.push_back(1);
                else 
                {
                    int num = ans[i - 1][j - 1] + ans[i - 1][j];
                    v.push_back(num);
                }
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};