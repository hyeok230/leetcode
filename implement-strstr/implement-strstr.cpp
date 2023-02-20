class Solution {
public:
    int strStr(string haystack, string needle) {
        int i = 0;
        while (haystack[i])
        {
            if (haystack[i] == needle[0] && i + needle.size() <= haystack.size())
            {
                for (int index = i, j = 0; j < needle.size(); index++, j++)
                {
                    if (haystack[index] != needle[j])
                        break ;
                    if (j == needle.size() - 1)
                        return i;
                }
            }
            i++;
        }
        return -1;
    }
};