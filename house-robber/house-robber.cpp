class Solution {
private:
    int robR(vector<int>& nums, int i)
    {
        if (i < 0)
            return 0;
        if (memo[i] >= 0)
            return memo[i];
        int result = max(robR(nums, i - 2) + nums[i], robR(nums, i - 1));
        memo[i] = result;
        return result;
    }
public:
    int memo[101];
    int rob(vector<int>& nums) {
        fill(memo, memo+101, -1);
        return robR(nums, nums.size() - 1);
    }
};