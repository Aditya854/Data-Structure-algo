#include <bits/stdc++.h>
using namespace std;
#define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
 int n,q;
    cin>>n>>q;
    vector<int> v(n+1,0),m(n+1,0);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++){
        m[i] = max(m[i-1],v[i]);
        v[i]+=v[i-1];
    }
    vector<int> res(q);
    for(int i=0;i<q;i++){
        int k;
        cin>>k;
        int ind = upper_bound(m.begin(),m.end(),k)-m.begin();
        res[i] = v[ind-1];
    }
    for(auto i:res) cout<<i<<" ";
    cout<<endl;
}


signed main()
{
    int l;
    cin>>l;
    for(int o=0;o<l;o++)
    {
       solve();
    }
    return 0;
}