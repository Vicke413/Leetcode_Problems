class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
      int n = grid.size();
        if (n == 0) return 0;
        int m = grid[0].size();
        if (m == 0) return 0;
       int top=-1;
       int btm=-1;
       int left=-1;
       int right=-1;
       
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {

            if(grid[i][j]==1)
            {
           
           if(top==-1) top=i;

            btm=i;
            }

             
                
            }
        }
        

        // easy implemtation
       
      
         for (int i = 0; i < m; ++i) {
            for (int j = 0; j <n; ++j) {

            if(grid[j][i]==1)
            {
               if(left==-1) left=i;
        right=i;
            
            }

            
                
            }
        }


    
        return (btm-top+1)*(right-left+1);
        
    }
};