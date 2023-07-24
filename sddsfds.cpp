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
   cin >> n;
   if(n%2 == 0)
   {
     for(int i=0;i<n/2;i++)
     {
        int a = floor((n/2)+1)+i;
        int b = i+1;
        cout<<a<<" "<<b<<" ";
     }
     cout<<endl;
   }
   else
   {  
     for(int i=0; i<=n/2; i++)
     { 
        if(i == n/2)
        {
            cout<<n<<endl;
            return ;
        }
        int a = floor((n/2)+1)+i;
        int b = i+1;
        cout<<a<<" "<<b<<" ";
     }
  
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