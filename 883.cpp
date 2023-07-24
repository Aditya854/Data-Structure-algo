#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
#define int long long int


class DSU{
    int *parent;
    int *rank;
public:
    // Constructor
    DSU(int n){
        
        // Defining size of the arrays.
        parent=new int[n];
        rank=new int[n];

        for(int i=0;i<n;i++)
        {
            parent[i]=i;
            rank[i]=0;
        }
    }
    
    // Find function
    int find(int node){
        
        if(node==parent[node]) return node;
        
        return parent[node]=find(parent[node]);
    }
    
    // Union function 
     void Union(int u,int v){
        u=find(u);
        v=find(v);
        if(u!=v)
        {
            if(rank[u]<rank[v])
            {
                int temp=u;
                u=v;
                v=temp;
            }
            parent[v]=u;
            if(rank[u]==rank[v])
                rank[u]++;
        }
    }
};



bool isSubstring(string s1, string s2)
{
    // using find method to check if s1 is
    // p1 substring of s2
    if (s2.find(s1) != string::npos)
        return true;
    return false;
} 

 int gcd( int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);   
}


int countNodesConnectedToNode(vector<vector<int>>& graph, int startNode) {
    unordered_set<int> visited;
    int counter = 0;
    
    function<void(int)> dfs = [&](int node) {
        visited.insert(node);
        counter++;
        for (int neighbor : graph[node]) {
            if (visited.count(neighbor) == 0) {
                dfs(neighbor);
            }
        }
    };
    
    dfs(startNode);
    return counter;
}

// // // // // WRITE UR CODE HERE // // // //
long power(int x, int n)
{
    // Initialize result to 1
    long long pow = 1;
 
    // Multiply x for n times
    for (int i = 0; i < n; i++) {
        pow = pow * x;
    }
 
    return pow;
}

void solve() {
    vector<string> v(3);
    for(int i=0;i<3;i++)
    {
        cin>>v[i];
    }

    string ans = "DRAW";

    for(int i=0;i<3;i++)
    {
        if(v[i][0]==v[i][1] && v[i][1]==v[i][2] && v[i][0]!='.')
        {
            ans = v[i][0];
        }
    }

    for(int i=0;i<3;i++)
    {
        if(v[0][i]==v[1][i] && v[1][i]==v[2][i] && v[0][i]!='.')
        {
            ans = v[0][i];
        }
    }

    if (v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.')
			ans=v[0][0];
		if (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.')
			ans=v[0][2];
		cout << ans << endl;
}

// // // // YOUR CODE ENDS HERE // // // //


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int l;
    cin>>l;
    for(int c=0;c<l;c++)
    {
       solve();
    }
    // return 0;
}