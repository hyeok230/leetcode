class Solution {
public:
    int reverse(int x) {
        long long n = x;
        bool flag = false;
         if (n < 0)
        {
            flag = true;
            n *= -1;
        }
        string s = to_string(n);
        string sMax = to_string(INT_MAX);
        string sMin = to_string(INT_MIN);
        std::reverse(s.begin(), s.end());
        if (flag)
        {
            s.insert(0, "-");
            if (s.size() >= sMin.size() && s > sMin)
                return 0;
        } else {
            if (s.size() >= sMax.size() && s > sMax)
                return 0;
        }
        return stoi(s);
    }
};