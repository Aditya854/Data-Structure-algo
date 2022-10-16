#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
   int n,k;
   cin>>n>>k;
   vector<int> v;
   int aux;
   for(int i=0;i<n;i++)
   {
    cin>>aux;
    v.push_back(aux);
   }
   int zer=0;
   int one=0;

   for(int i=0;i<n;i++)
   {
    if(v[i] == 1)
    {
        one++;
    }
    else{
        zer++;
    }
   }

   if(one == 0)
   {
    cout<<"NO"<<endl;
    return;
   }
   cout<<"YES"<<endl;
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