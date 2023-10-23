#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
   int n,k;
   cin>>n>>k;

   string s;
   cin>>s;
   unordered_map<char,int> mp;
   for(auto it:s)
   {
    mp[it]++;
   }

   int even_f=0,odd_f=0;
   for(auto it:mp)
   {
    if(it.second%2!=0)
    {
        odd_f++;
    }
    else{
        even_f++;
    }
   }

   if(k>=odd_f-1)
   {
    cout<<"YES"<<endl;
    return;
   }
   cout<<"NO"<<endl;
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