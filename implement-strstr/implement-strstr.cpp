class Solution {
public:
    int strStr(string haystack, string needle) {
        int n = haystack.size();
        int m = needle.size();
        
        for (int start = 0; start <= n - m; start++)
        {
            for (int i = 0; i < m; i++)
            {
                if (haystack[start + i] != needle[i])
                    break ;
                if (i == m - 1)
                    return start;
            }
        }
        return -1;
    }
};