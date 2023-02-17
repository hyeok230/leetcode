class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ret;
        unordered_map<int, int> m;
        
        for (int i = 0; i < nums.size(); i++)
        {
            int n = target - nums[i];
            if (m.find(n) != m.end())
            {
                ret.push_back(m[n]);
                ret.push_back(i);
                break ;
            }
            m[nums[i]] = i;
        }
        return ret;
    }
};