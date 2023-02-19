class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        int n = s.size();
        unordered_map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
            m[t[i]]--;
        }
        for (auto count: m)
            if (count.second) return false;
        return true;
    }
};