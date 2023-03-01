class Solution {
private:
    vector<int> listOrigin;
    vector<int> list;
    int n;
    
public:
    Solution(vector<int>& nums) {
        listOrigin = nums;
        list = nums;
        n = nums.size();
    }
    
    vector<int> reset() {
        list = listOrigin;
        return list;
    }
    
    vector<int> shuffle() {
        for (int i = 0; i < n - 1; i++)
        {
            int j = rand() % (n - i) + i;
            int temp = list[i];
            list[i] = list[j];
            list[j] = temp;
        }
        return list;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */