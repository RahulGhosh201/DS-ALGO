#include<bits/stdc++.h>
using namespace std;

bool isSafe(int x,int y,int n,vector<vector<int>>& visited,vector<vector<int>>& m)
{
    if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y]==0 &m[x][y]==1)
        return true;
    else
        return false;
}

void solve(vector<string>& ans, int x, int y, vector<vector<int>>& m, int n, vector<vector<int>>& visited, string path)
{
    if(x==n-1 && y>=n-1 )
    {
        ans.push_back(path);
        visited[x][y]=1;
        //down
        int newx=x+1;
        int newy=y;
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('D');
            solve(ans,newx,newy,m,n,visited,path);
            path.pop_back();
        }

        //left
        int newx=x;
        int newy=y-1;
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('L');
            solve(ans,newx,newy,m,n,visited,path);
            path.pop_back();
        }

        //right
        int newx=x;
        int newy=y+1;

        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('R');
            solve(ans,newx,newy,m,n,visited,path);
            path.pop_back();
        }

        //up
        int newx=x-1;
        int newy=y;
        if(isSafe(newx,newy,n,visited,m))
        {
            path.push_back('U');
            solve(ans,newx,newy,m,n,visited,path);
            path.pop_back();
        }

        visited[x][y]=0;
    }
}

vector<string>& findPath(vector<vector<int>>& m,int n)
{
    vector<string> ans;
    int srcx=0,srcy=0;
    vector<vector<int>> visited=m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            visited[i][j]=0;
        }
    }
    string path=" ";
    solve(ans,srcx,srcy,m,n,visited,path);
    sort(ans.begin(),ans.end());
    return ans;
}