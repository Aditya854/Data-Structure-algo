#include <bits/stdc++.h>
using namespace std;





void solve(long long int n) {
   while(n!=1)
   {
    cout<<n<<" ";
    if(n%2==0)
    {
        n=n/2;
    }
    else{
        n=(n*3)+1;
    }
   }
   cout<<1<<endl;
   return;
}


int main()
{
    long long int n;
    cin>>n;
    solve(n);
    return 0;
}