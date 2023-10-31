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
   vector<int> arr(n+1);

   for(int i=1;i<=n;i++)
   {
    cin>>arr[i];
   }

   bool flag=true;
   for(int i=1;i<n;i++)
   {
    if(arr[i]>arr[i+1] && i!=1 && i!=2 && i!=4 && i!=8 && i!=16)
    {
        flag=false;
    }
   }

   if(flag==true)
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