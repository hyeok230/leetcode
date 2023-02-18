class Solution {
public:
    bool check_row(vector<vector<char>>& board)
    {
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> m;
            m.clear();
            for (int j = 0; j < 9; j++)
            {
                if (board[i][j] != '.' && m.count(board[i][j]))
                    return false;
                else 
                    m[board[i][j]] = 1;
            }
        }
        return true;
    }
    
    bool check_column(vector<vector<char>>& board)
    {
        for (int i = 0; i < 9; i++)
        {
            unordered_map<char, int> m;
            m.clear();
            for (int j = 0; j < 9; j++)
            {
                if (board[j][i] != '.' && m.count(board[j][i]))
                    return false;
                else 
                    m[board[j][i]] = 1;
            }
        }
        return true;
    }
    
    bool check_square(vector<vector<char>>& board)
    {
        int list1[3] = {0, 3, 6};
        int list2[3] = {0, 3, 6};
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                unordered_map<char, int> m;
                m.clear();
                int x = list1[i];
                int y = list2[j];
                for (int a = x; a < x + 3; a++)
                {
                    for (int b = y; b < y + 3; b++)
                    {
                        if (board[a][b] != '.' && m.count(board[a][b]))
                            return false;
                        else
                            m[board[a][b]] = 1;
                    }
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        if (!check_row(board))
            return false;
        if (!check_column(board))
            return false;
        if (!check_square(board))
            return false;
        return true;
    }
};