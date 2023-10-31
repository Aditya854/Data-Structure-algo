#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 

bool check(char a,char b,char c,char d)
{
    if(a!=b && c!=d)
    {
        return true;
    }
    return false;
}
void solve() {
   int n,q;
   cin>>n>>q;
   vector<int> arr(n);
   vector<int> query(q);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
unordered_map<int,int> mp;
   for(int i=0;i<q;i++)
   {
    cin>>query[i];
     
        if(mp[query[i]]==0)
        {
            for(int k=0;k<n;k++)
            {
                if(arr[k]%mp[query[i]]==0)
                {
                    arr[k]+=mp[query[i]-1];
                }
            }
            mp[query[i]]++;
        }
   }
  
   for(auto it:arr)
   {
    cout<<it<<" ";
   }
   cout<<endl;


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