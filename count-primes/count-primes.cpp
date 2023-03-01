class Solution {
private:
    bool list[5000001] = { false };
public:
    int countPrimes(int n) {
        if (n < 3)
            return 0;
        
        int ans = 0;
        for (int i = 2; i <= sqrt(n - 1); i++)
        {
            if (!list[i])
            {
                for (int j = i + i; j <= n - 1; j += i)
                    list[j] = true;
            }
        }
        for (int i = 2; i <= n - 1; i++)
            if (!list[i])
                ans++;
        return ans;
    }
};