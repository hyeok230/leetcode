class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int, int> um;
        vector<int> ret;
        for (int i = 0; i < nums1.size(); i++)
        {
            if (um[nums1[i]])
                um[nums1[i]]++;
            else
                um[nums1[i]] = 1;
        }
        for (int i = 0; i < nums2.size(); i++)
        {
            if (um[nums2[i]])
            {
                um[nums2[i]]--;
                ret.push_back(nums2[i]);
            }
        }
        return ret;
    }
};