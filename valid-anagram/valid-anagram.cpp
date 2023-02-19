class Solution {
public:
    bool isAnagram(string s, string t) {
        int list[26];
        bzero(list, sizeof(list));
        for (int i = 0; i < s.size(); i++)
        {
            int index = s[i] - 'a';
            list[index]++;
        }
        for (int i = 0; i < t.size(); i++)
        {
            int index = t[i] - 'a';
            list[index]--;
        }
        for (int i = 0; i < 26; i++)
        {
            if (list[i] != 0)
                return false;
        }
        return true;
    }
};