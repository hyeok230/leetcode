// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long first = 1;
        long last = n;
        long index = n;
        
        while (first <= last)
        {
            long mid = (first + last) / 2;
            if (isBadVersion(mid))
            {
                last = mid - 1;
                index = min(index, mid);
            } else {
                first = mid + 1;
            }
        }
        return index;
    }
};