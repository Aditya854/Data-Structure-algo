#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
   int n;
   cin>>n;
   vector<int> v;
   int aux;
   for(int i=0;i<n;i++)
   {
    cin>>aux;
    v.push_back(aux);
   }
   set<int> st;
   for(int i=0;i<n;i++)
   {
    st.insert(v[i]);
   }

   if(v.size()==st.size())
   {
    cout<<"YES"<<endl;
    return;
   }
   else{
    cout<<"NO"<<endl;
    return;
   }
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