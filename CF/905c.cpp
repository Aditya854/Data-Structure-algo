#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    int ans,d=INT_MAX,c1=0,c2=0;
    for(int i=0;i<n;i++)
    {
       if(a[i]%k==0)
       { 
        d=0;
        break;
       }
       else
       d=min(d,k-(a[i]%k));  
       if(a[i]%2==0) c1++;
       else c2++;
    }
    if(k==4)
    {
        if(c1>=2 || d==0)
        ans=0;
        else if(c1==1) 
        ans=1;
        else ans=min(d,2);
    }
    else ans=d;
    cout<<ans<<endl;
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