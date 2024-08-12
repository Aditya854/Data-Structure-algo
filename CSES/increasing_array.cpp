#include <bits/stdc++.h>
using namespace std;





void solve() {
 int n;
 cin>>n;
 vector<int> arr(n);
 for(int i=0;i<n;i++)
 {
    cin>>arr[i];
 }
 long long int ans = 0;
 for(int i=1;i<n;i++)
 {
    if(arr[i]<arr[i-1])
    {
        ans+=abs(arr[i]-arr[i-1]);
        arr[i]=arr[i-1];
    }
 }

 cout<<ans<<endl;
}


int main()
{
    solve();
    return 0;
}