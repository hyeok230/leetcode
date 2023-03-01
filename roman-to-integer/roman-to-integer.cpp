class Solution {
public:
    int romanToInt(string s) {
        int n = 0;
        queue<char> q;
        for (int i = 0; i < s.size(); i++)
            q.push(s[i]);
        while (!q.empty())
        {
            char c = q.front();
            q.pop();
            if (c == 'I')
            {
                if (q.front() == 'V')
                {
                    q.pop();
                    n += 4;
                } else if (q.front() == 'X')
                {
                    q.pop();
                    n += 9;
                }
                else 
                    n += 1;
            }
            else if (c == 'V')
                n += 5;
            else if (c == 'X')
            {
                if (q.front() == 'L')
                {
                    q.pop();
                    n += 40;
                } else if (q.front() == 'C')
                {
                    q.pop();
                    n += 90;
                } else {
                    n += 10;
                }
            }
            else if (c == 'L')
                n += 50;
            else if (c == 'C')
            {
                if (q.front() == 'D')
                {
                    q.pop();
                    n += 400;
                } else if (q.front() == 'M')
                {
                    q.pop();
                    n += 900;
                } else {
                    n += 100;
                }
            }
            else if (c == 'D')
                n += 500;
            else if (c == 'M')
                n += 1000;
        }
        
        
        return n;
    }
};