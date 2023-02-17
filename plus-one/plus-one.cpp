class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size() - 1;
     
        while (1)
        {
            if (digits[i] == 9)
            {
                digits[i] = 0;
                if (i - 1 >= 0)
                    i--;
                else 
                {
                    digits.insert(digits.begin(), 1);
                    break ;
                }
            } else {
                ++digits[i];
                break ;
            }
        }
        return (digits);
    }
};