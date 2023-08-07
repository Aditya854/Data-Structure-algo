#include<bits/stdc++.h>
using namespace std;

int dir[4][2] = {{-1,0},{+1,0},{0,-1},{0,+1}};



void helper(vector<vector<int>>& grid,int n)
{
   queue<pair<int,int>> q;
   vector<vector<int>> vis(n,vector<int>(n,-1));
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
        if(grid[i][j]==1)
        {
            q.push({i,j});
            grid[i][j] = 0;
            vis[i][j]=1;
        }
    }
   }

   while(!q.empty())
    {
        auto topp = q.front();
        q.pop();
        int x = topp.first;
        int y = topp.second;
        int val = grid[x][y];
        vis[x][y]=1;
        for(auto it:dir)
        {
            int xx = x+it[0];
            int yy = y+it[1];
            if(xx>=0 && yy>=0 && xx<n && yy<n && vis[xx][yy]==-1)
            {
                grid[xx][yy] = val+1;
                q.push({xx,yy});
                vis[xx][yy]=1;
            }
        }
    }
}

int helper2(vector<vector<int>>& grid,int n,int& ans)
{
   priority_queue<pair<int,pair<int,int>>> pq;
   vector<vector<int>> vis(n,vector<int>(n,-1));

   pq.push({grid[0][0],{0,0}});
   vis[0][0]=1;

   while(!pq.empty())
   {
    auto topp = pq.top();
    pq.pop();
    int x = topp.second.first;
    int y = topp.second.second;
    vis[x][y]=1;
    ans = min(ans,grid[x][y]);
    if(x==n-1 && y==n-1)
    {
        return ans;
    }
    for(auto it:dir)
    {
        int xx = x+it[0];
        int yy = y+it[1];
        if(xx>=0 && yy>=0 && xx<n && yy<n && vis[xx][yy]==-1)
        {
            pq.push({grid[xx][yy],{xx,yy}});
            vis[xx][yy]=1;
        }
    }
   }
   return ans;
}



int main()
{
    int n;
    cin>>n;

    vector<vector<int>> grid(n,vector<int>(n));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
    }


    helper(grid,n);
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    int ans=1e9;
    int temp = helper2(grid,n,ans);
    cout<<"ans : "<<temp<<endl;
}