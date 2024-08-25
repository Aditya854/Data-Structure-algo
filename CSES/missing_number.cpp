#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
typedef pair<ld,ld> pld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
#define endl '\n'
#define mod 1000000007

ll min(ll a, ll b){ 
    return a<b?a:b;
}

ll max(ll a, ll b){
    return a>b?a:b;
}


int main(){
 ll n; cin>>n;
 unordered_map<ll,ll> cnt;
 for(int i=0; i<(2*n-2); i++){
    ll x; cin>>x;
    cnt[x]++;
 }

 vector<pll> v;
 for(auto it: cnt){
    v.push_back({it.second,it.first});
 }

 sort(v.rbegin(),v.rend());
 
 vector<ll> val(n+1,-1);

 ll x = n;
 ll sum =0;
 for(auto it:v){
    val[it.second] = x;
    sum += (x*it.first);
    x--;
 }

 for(int i=1; i<=n; i++){
    if(val[i]==-1){
        val[i]=x;
        x--;
    }
 }

 for(int i=1; i<=n; i++){
    cout<<"value assigned to vertex "<<i<<" = "<<val[i]<<endl;
 }

 cout<<"Sum = "<<sum<<endl;



}