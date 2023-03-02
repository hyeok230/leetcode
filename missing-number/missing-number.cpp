class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int bit = n;
        for (int i = 0; i < n; i++)
        {
            bit ^= nums[i];
            bit ^= i;
        }
        return bit;
    }
};