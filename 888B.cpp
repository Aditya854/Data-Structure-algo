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
  int n,k;
  cin>>n>>k;

  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

  int f_k=k;
  int l_k=k;
  int temp1;
  int temp2;

  for(int i=0;i<n;i++)
  {
    if(v[i]==v[0] && f_k>0)
    {
        f_k--;
        temp1=i;
    }
  }

  if(v[0]==v[n-1] && f_k==0)
  {
    cout<<"YES"<<endl;
    return;
  }

  for(int i=n-1;i>=0;i--)
  {
    if(v[i]==v[n-1] && l_k>0)
    {
        l_k--;
         temp2=i;
    }
  }

  if(f_k==0 && l_k==0)
  {
    if(temp1<temp2)
    {
 cout<<"YES"<<endl;
    return;
    }
   
  }

  cout<<"NO"<<endl;

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