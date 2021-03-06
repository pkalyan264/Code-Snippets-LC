bool isSafe(int row,int col,vector<string> board,int n)
    {
        for(int i=col;i>=0;i--)
        {
            if(board[row][i]=='Q')return false;
        }
        for(int i=row,j=col;i>=0 and j>=0;i--,j--)
        {
            if(board[i][j]=='Q')return false;
        }
        for(int i=row,j=col;i<n and j>=0;i++,j--)
        {
                if(board[i][j]=='Q')return false;
        }
        return true;
    }
    void solve(int col,vector<string>&board,vector<vector<string>>&ans,int n)
    {
        if(col==n)
        {
            ans.push_back(board);
        }
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(col+1,board,ans,n);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) 
    {
        vector<vector<string>>ans;
        vector<string>board(n);
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
