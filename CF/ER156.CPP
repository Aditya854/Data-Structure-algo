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
   int n;
   cin>>n;
   vector<int> arr(n);
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }

   int maxi = INT_MIN;
   int cnt=0;
   for(int i=0;i<n;i++)
   {
    if(arr[i]>=0)
    {
        cnt++;
    }
    else{
        maxi = max(maxi,cnt);
        cnt=0;
    }
   }

   cout<<"max length is "<<maxi<<endl;
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