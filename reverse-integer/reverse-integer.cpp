class Solution {
public:
    int reverse(int x) {
        int flag = 0;
        if (x < 0)
            flag = 1;
        string str = to_string(x);
        string int_max = to_string(INT_MAX);
        string int_min = to_string(INT_MIN);
        std::reverse(str.begin() + flag, str.end());
        if (str.size() == int_min.size() && str > int_min)
            return 0;
        if (flag == 0 && str.size() == int_max.size() && str > int_max)
            return 0;
        int ret = stoi(str);
        return ret;
    }
};