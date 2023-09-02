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
   long long key;
   cin>>key;
   bool is_pos;
   if(key>0)
   {
    is_pos = true;
   }
   else{
    is_pos=false;
   }

   vector<int> freq(10,0);
   long long temp = abs(key);
   while(temp)
   {
    int d = temp%10;
    freq[d]++;
    temp = temp/10;
   }
long long result = 0;
   if(is_pos)
   {
     for(int i=1;i<=9;i++)
     {
        if(freq[i])
        {
            result=i;
            freq[i]--;
            break;
        }
     }

     for(int i=0;i<=9;i++)
     {
        if(freq[i]--)
        {
          result = result*10 + i;
        }
        
     }
   }
   else{
        for(int i=9;i>=1;i--)
        {
            if(freq[i])
            {
                result=i;
                freq[i]--;
                break;
            }
        }

        for(int i=9;i>=0;i--)
        {
            if(freq[i]--)
            {
            result = result*10 +i;
            }
            
        }
        result = -1*result;
   }

   cout<<result<<endl;
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