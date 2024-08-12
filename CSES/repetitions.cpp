#include <bits/stdc++.h>
using namespace std;





void solve() {
  string s;
  cin>>s;
  int cnt=1;
  int ans = 1;
  for(int i=1;i<s.size();i++)
  {
    if(s[i]==s[i-1])
    {
        cnt++;
        ans = max(ans,cnt);
    }
    else{
        cnt=1;
    }
  }
  cout<<ans<<endl;
}


int main()
{
    solve();
    return 0;
}