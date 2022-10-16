#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
    int n;
    cin >> n ;
 
    vector<int> a(n) ,b(n);
    for( int i=0 ;i<n ;i++ ) cin >> a[i] ,b[i] = a[i];
 
    int ans = 0;
    sort(b.begin(),b.end());   
    for( int i=0 ;i<n ;i++ ) ans += (a[i]  != b[i]);
 
    cout << ans/2 << '\n';
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