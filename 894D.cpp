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


bool cmp(vector<int> a,vector<int> b)
{
    if(a[0]==b[0])
    {
        return a[1]<b[1];
    }
    return a[0]>b[0];
}

void solve() {
  int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

   unordered_map<int,int> mp1;
   for(auto it:v)
   {
      mp1[it]++;
   }

   unordered_map<int,int> mp2;
   for(int i=0;i<v.size();i++)
   {
    if(mp2.find(v[i])!=mp2.end())
    {
        continue;
    }
    else{
        mp2.insert({v[i],i});
    }
   }

   for(auto it:mp1)
   {
    cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<endl;
   
   for(auto it:mp2)
   {
    cout<<it.first<<" "<<it.second<<endl;
   }
   cout<<endl;


   vector<vector<int>> pre;
   for(auto it:mp1)
   {
     int a = it.second;
     int b = mp2[it.first];
     int c = it.first;

     pre.push_back({a,b,c});
   }

   for(auto it:pre)
   {
    cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
   }
   cout<<endl;

   sort(pre.begin(),pre.end(),cmp);

   for(auto it:pre)
   {
    cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl;
   }
   cout<<endl;

   vector<int> ans;
   for(auto it:pre)
   {
      while(it[0]>0)
      {
        ans.push_back(it[2]);
        --it[0];
      }
   }

   for(auto it:ans)
   {
    cout<<it<<" ";
   }
   cout<<endl;



  
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

void sol1()
{
 int n;
  cin>>n;
  vector<int> v(n);
  for(int i=0;i<n;i++)
  {
    cin>>v[i];
  }

  int cnt_odd=0;
  int cnt_eve=0;

  for(auto it:v)
  {
    if(it%2==0)
    {
        cnt_eve++;
    }
    else{
        cnt_odd++;
    }
  }

  if(cnt_odd%2!=0)
  {
    cout<<"NO"<<endl;
    return;
  }
  cout<<"YES"<<endl;
  return;
}

void sol2(){
 string s;
  cin>>s;
int n = s.size();
  int pos=n;
  int ind=n-1;

  while(ind>-1)
  {
    if(s[ind]-'0'>=5)
    {
        int next = ind-1;

        while(next>-1 && s[next]=='9')
        {
            --next;
        }

        if(next==-1)
        {
            pos=1;
            s = '1'+s;
            break;
        }
        else{
            ind = next;
            pos = next+1;
            int c = s[ind]-'0';
            ++c;
            s[ind] = c+'0';
        }
    }
    else{
        --ind;
    }
  }

  for(int i=pos;i<s.length();i++)
  {
    s[i]='0';
  }

  cout<<s<<endl;
  return ;
}