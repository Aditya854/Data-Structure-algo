#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
//    int n,k;
//    cin>>n>>k;
//    vector<int> arr(n);
//    for(int i=0;i<n;i++)
//    {
//     cin>>arr[i];
//    }

//    unordered_map<int,int> mp;
//    for(auto it:arr)
//    {
//      mp[it]++;
//    }
//    if(mp.find(k)!=mp.end())
//    {
//       cout<<"YES"<<endl;
//       return;
//    }
//    cout<<"NO"<<endl;

   int n;
   cin>>n;
   for(int i=0;i<n;i++)
   {
    cout<<2*i + 1<<" ";
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