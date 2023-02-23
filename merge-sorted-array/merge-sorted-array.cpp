class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = 0, b = 0;
        vector<int> v;
        
        
        while (a < m && b < n)
        {
            if (nums1[a] < nums2[b])
            {
                v.push_back(nums1[a]);
                a++;
            } else {
                v.push_back(nums2[b]);
                b++;
            }
        
        }
        while (a < m)
            v.push_back(nums1[a++]);
        while (b < n)
            v.push_back(nums2[b++]);
        for (int i = 0; i < m + n; i++)
            nums1[i] = v[i];
    }
};