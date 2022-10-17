#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
  int n;
  char c;
  cin>>n>>c;
  string s;
  cin>>s;
  string a = s;
  a = a+s;
 if(c=='g')
 {
    cout<<0<<endl;
    return;
 }

 
  int maxlen = INT_MIN;
//   bool flag1 = true;
vector<int> green;
  for(int i=0;i<a.size();i++)
  {
    if(a[i]=='g')
    {
       green.push_back(i);
    }
  }

  for(int i=0;i<n;i++)
  {
    if(a[i]==c)
    {
        int ub = upper_bound(green.begin(),green.end(),i)-green.begin();

        maxlen = max(maxlen,green[ub]-i);
    }
  }

  cout<<maxlen<<endl;

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