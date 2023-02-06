class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<set<int>>rows(9),cols(9);
        int boxs[3][3][10]={0}; // indexies of the box and the value in the box

        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                continue;

                int cur = board[i][j]-'0';
                if(rows[i].count(cur) || cols[j].count(cur)|| boxs[i/3][j/3][cur]!=0) //if the number exist in a arow or a colum or the same box
                return false;

                rows[i].insert(cur);
                cols[j].insert(cur);
                boxs[i/3][j/3][cur]=cur;
            }
        }
        return true;
    }
};
