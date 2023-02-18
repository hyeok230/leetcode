class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> row_visited[9];
        unordered_set<char> column_visited[9];
        unordered_set<char> square_visited[3][3];
        
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                char c = board[i][j];
                
                if (c != '.')
                {
                    if (row_visited[i].count(c) || column_visited[j].count(c) || square_visited[i/3][j/3].count(c))
                        return false;
                }
                
                row_visited[i].insert(c);
                column_visited[j].insert(c);
                square_visited[i/3][j/3].insert(c);
            }
        }
        return true;
    }
};