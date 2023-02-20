class Solution {
public:
    bool isPalindrome(string s) {
        string str1 = "", str2 = "";
        for (int i = 0; i < s.size(); i++)
        {
            if (isalpha(s[i]) || isdigit(s[i]))
            {
                str1 += tolower(s[i]);
                str2 += tolower(s[i]);
            }
        }
        reverse(str2.begin(), str2.end());
        if (str1 == str2)
            return true;
        return false;
    }
};