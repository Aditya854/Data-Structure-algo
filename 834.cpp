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

int helper(int i,int h,int g_serum,int b_serum,int n,vector<int>& v)
{
    if(i==n)
    {
        return 0;
    }

    if(v[i]<h)
    {
        return helper(i+1,h+floor(v[i]/2),g_serum,b_serum,n,v)+1;
    }
int ans1 = 0;
int ans2 = 0;
    if(g_serum>0)
    {
         ans1 = helper(i,2*h,g_serum-1,b_serum,n,v);
    }

    if(b_serum>0)
    {
        ans2 = helper(i,3*h,g_serum,b_serum-1,n,v);
    }

    return max(ans1,ans2);
}
void solve() {
  int n,h;
  cin>>n>>h;

  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

  sort(v.begin(),v.end());
  
  int ans = helper(0,h,2,1,n,v);
  cout<<ans<<endl;

}

// // // // YOUR CODE ENDS HERE // // // //


signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
        cout.precision(10); cout.setf(ios::fixed);
    int l;
    cin>>l;
    for(int c=0;c<l;c++)
    {
       solve();
    }
    // return 0;
}