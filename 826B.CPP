#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
  int a,b,c;
  cin>>a>>b>>c;

  if(a==b+c)
  {
    cout<<"YES"<<endl;
    return;
  }
  else if(b==a+c)
  {
    cout<<"YES"<<endl;
    return;
  }
  else if(c==a+b)
  {
    cout<<"YES"<<endl;
    return;
  }
  else{
    cout<<"NO"<<endl;
    return;
  }
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