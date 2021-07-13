class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) 
    {
        queue<pair<int,int>>rotten;
        int r=grid.size(),c=grid[0].size(),fresh=0,t=0;
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(grid[i][j]==2)rotten.push({i,j});
                if(grid[i][j]==1)fresh++;
            }
        }
        while(!rotten.empty())
        {
            int rott=rotten.size();
            for(int i=0;i<rott;i++)
            {
                int x=rotten.front().first,y=rotten.front().second;
                rotten.pop();
                if(x>0 and grid[x-1][y]==1){grid[x-1][y]=2;fresh--;rotten.push({x-1,y});}
                if(y>0 and grid[x][y-1]==1){grid[x][y-1]=2;fresh--;rotten.push({x,y-1});}
                if(x<r-1 and grid[x+1][y]==1){grid[x+1][y]=2;fresh--;rotten.push({x+1,y});}
                if(y<c-1 and grid[x][y+1]==1){grid[x][y+1]=2;fresh--;rotten.push({x,y+1});}
            }
            if(!rotten.empty())t++;
            
        }
        return (fresh==0)?t:-1;
    }
};
