#include<bits/stdc++.h>
using namespace std;

int helper(int n,vector<vector<int>>& req)
{
	vector<int> adj[n];
	vector<int> indegree(n,0);
	for(auto it:req)
	{
		int u = it[0]-1;
		int v = it[1]-1;
		adj[u].push_back(v);
        indegree[v]++;
	}

	int steps=0;
	int cnt=0;

	queue<int> q;
	for(int i=0;i<n;i++)
	{
		if(indegree[i]==0)
		{
			q.push(i);
		}
	}

	while(!q.empty())
	{
		int s = q.size();
		cnt+=s;
		while(s--)
		{
			int node = q.front();
			q.pop();
			for(auto it:adj[node])
			{
				if(--indegree[it]==0)
				{
					q.push(it);
				}
			}
		}
		++steps;
	}

cout<<cnt<<endl;
cout<<steps<<endl;
	return cnt==n?steps:-1;
	
}
int main()
{
	int n;
	cin>>n;
	vector<vector<int>> req;
	for(int i=0;i<6;i++)
	{
		int a,b;
		cin>>a>>b;
		req.push_back({a,b});
	}

	int ans = helper(n,req);
	cout<<"semesters required:"<< ans;
}