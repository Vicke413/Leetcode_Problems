class Solution {
    boolean check(char[][] board,int row,int col,char value)
    {
        for(int i=0;i<9;i++)
        {
            if(board[i][col]==value && i!=row)
            {
                return false;
            }
        }
         for(int i=0;i<9;i++)
        {
            if(board[row][i]==value && i!=col)
            {
                return false;
            }
        }
         for(int i=0; i<9; i++){
            int x = 3*(row/3)+(i/3);
            int y = 3*(col/3)+(i%3);
            if(board[x][y] == value && x != row && y != col){
                return false;
            }
        }
return true;


    }
    public boolean isValidSudoku(char[][] board) {

        int i,j;

        for(i=0;i<9;i++)
        {
            for(j=0;j<9;j++)
            {
                if(board[i][j]!='.')
                {
                    if(check(board,i,j,board[i][j])==false)
                    {
                        return false;
                    }
                }


            }
        }
        return true;
        
    }
}