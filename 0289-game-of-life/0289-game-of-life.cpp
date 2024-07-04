class Solution {
public:
int countneigh(vector<vector<int>> board,int row,int col)
{

    int n=board.size();
int m=board[0].size();
    int delrow[8]={0,1,0,-1,1,1,-1,-1};
    int delcol[8]={1,0,-1,0,-1,1,1,-1};
    int c=0;
    for(int i=0;i<8;i++)
    {
        int newcol=delcol[i]+col;
        int newrow=delrow[i]+row;
               if(newrow>=0 && newrow<n && newcol>=0 && newcol<m && board[newrow][newcol]==1){
            c++;
        }

    }
return c;


}
    void gameOfLife(vector<vector<int>>& board) {

int n=board.size();

int m=board[0].size();
vector<vector<int>> sol=board;

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if((countneigh(sol,i,j)<2 || countneigh(sol,i,j)>3)&&  board[i][j]==1)
        {
            board[i][j]=0;
        }
        else if((countneigh(sol,i,j)==2 || countneigh(sol,i,j)==3) &&  board[i][j]==1)
        {
            board[i][j]=1;
        }
        else if((countneigh(sol,i,j))==3 &&  board[i][j]==0)
        {
            board[i][j]=1;
        }
    }
}
    
    }
};