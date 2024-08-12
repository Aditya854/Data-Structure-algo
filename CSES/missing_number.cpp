#include <bits/stdc++.h>
using namespace std;





void solve() {
   long long int n;
   cin>>n;
   //vector<int> arr(n-1);
   long long int sum=0,input;
   for(int i=0;i<n-1;i++)
   {
    cin>>input;
    sum+=input;
   }

   long long int total_sum = (n*(n+1))/2;

   cout<<total_sum-sum<<endl;  
}


int main()
{
    solve();
    return 0;
}