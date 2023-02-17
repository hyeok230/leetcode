class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int addn = 1;
        int i = 0;
        while(addn)
        {
            if (digits[i] + addn >= 10)
            {
                digits[i] = 0;
                if (i == digits.size() - 1)
                {
                    digits.push_back(1);
                    addn--;
                }
            } else {
                digits[i]++;
                addn--;
            }
            i++;
        }
        reverse(digits.begin(), digits.end());
        return (digits);
    }
};