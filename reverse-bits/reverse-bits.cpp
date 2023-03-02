class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans = 0;
        for (int i = 31; i >= 0; i--)
        {
            int bit = 1;
            bit &= n;
            n >>= 1;
            bit <<= i;
            ans |= bit;
        }
        return ans;
    }
};