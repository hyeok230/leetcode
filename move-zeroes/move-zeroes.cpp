class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i = 0;
        int cnt = 0;
        int n = nums.size() - 1;
        
        while (1)
        {
            if (cnt == n)
                break ;
            if (nums[i] == 0)
            {
                nums.push_back(0);
                nums.erase(nums.begin() + i);
                cnt++;
                continue ;
            } else {
                i++;
                cnt++;
            }
        }
    }
};