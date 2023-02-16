class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size())
            swap(nums1, nums2);
    
        unordered_map<int, int> um;
        for (auto n:nums1)
            um[n]++;
        
        int k = 0;
        for (auto n:nums2)
        {
            if (um[n] > 0)
            {
                um[n]--;
                nums1[k++] = n;
            }
        }
        return vector<int>(nums1.begin(), nums1.begin()+k);
    }
};