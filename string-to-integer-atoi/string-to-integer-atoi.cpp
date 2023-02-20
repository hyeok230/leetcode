class Solution {
public:
    int myAtoi(string s) {
        long long ret = 0;
        int i = 0;
        bool flag = false;
        while (s[i] == ' ')
            i++;
        if (s[i] == '-' || s[i] == '+')
        {
            if (s[i] == '-')
                flag = true;
            i++;
        }
        while (isdigit(s[i]))
        {
            ret = ret * 10 + s[i] - '0';
            if (ret > INT_MAX)
            {
                if (flag)
                    return INT_MIN;
                return INT_MAX;
            }
            i++;
        }
        if (flag)
            ret *= -1;
        return ret;
    }
};