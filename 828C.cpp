#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
   int n;
   cin>>n;
   vector<int> v;
   int aux;
   for(int i=0;i<n;i++)
   {
    cin>>aux;
    v.push_back(aux);
   }

   int count=0;
   for(int i=0;i<n;i++)
   {
    while(v[i]%2==0)
    {
        count++;
        v[i] = v[i]/2;
    }
   }

   if(count>=n)
   {
     cout<<0<<endl;
   }
   else{
    vector<int> w;
    for(int i=2;i<=n;i++)
    {
        int j=i;
        int k=0;
        while(j%2==0)
        {
            k++;
            j=j/2;
        }
        if(k>0)
        {
            w.push_back(k);
        }
    }
    sort(w.begin(),w.end());
    int kk = w.size();
    int ans=0;
    for(int i=kk-1;i>=0 && n-count > 0; i--)
    {
       count = count + w[i];
          ans++;
    }
    if(count<n)
    {
        cout<<-1<<endl;
        return;
    }
    else{
        cout<<ans<<endl;
        return;
    }
   }
  return;
}


int main()
{
    int l;
    cin>>l;
    for(int o=0;o<l;o++)
    {
       solve();
    }
    return 0;
}