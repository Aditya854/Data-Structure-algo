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
      vector<int> arr;
      int aux;
      for(int i=0;i<n;i++)
      {
        cin>>aux;
        arr.push_back(aux);
      }

      int as = findGCD(arr,n);
      if(as==1)
      {
        cout<<0<<endl;
        return;
      }

      else if(gcd(as,n)==1)
      {
        cout<<1<<endl;
        return;
      }

      else if(gcd(as,n-1)==1)
      {
        cout<<2<<endl;
        return;
      }
      else{
        cout<<3<<endl;
        return;
      }

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