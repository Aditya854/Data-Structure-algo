#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 

int gcd(int a, int b)
{
  if (a == 0)
    return b;
  return gcd(b % a, a);
}

int findGCD(vector<int> arr, int n)
{
  int result = arr[0];
  for (int i = 1; i < n; i++)
  {
    result = gcd(arr[i], result);
 
    if(result == 1)
    {
    return 1;
    }
  }
  return result;
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

   int cnt=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='Q')
        {
           cnt++;
        }
        else{
            if(cnt>0)
            {
               cnt--;
            }
           
        }
    }

    if(cnt==0)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
return ;

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