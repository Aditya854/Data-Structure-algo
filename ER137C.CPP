#include <bits/stdc++.h>
using namespace std;
// #define int long long 

bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 



void solve() {
    long long int n;
    cin>>n;
    vector<long long int> a,b;
    long long int aux;
    long long int sum=0;
    for(long long int i=0;i<n;i++)
    {
        cin>>aux;
        sum+=aux;
        a.push_back(aux);
    }
    long long int maxele=INT_MIN;

    for(long long int i=0;i<n;i++)
    {
        cin>>aux;
        sum+=aux;
        b.push_back(aux);
    }

    for(long long int i=0;i<n;i++)
    {
        maxele = max(b[i],maxele);
    }

    cout<<sum-maxele<<endl;    
}


int main()
{   string S = "i.like.this.program.very.much";
     stringstream ss(S);

     vector<string> ans;
     string aux;

     while(getline(ss,aux,'.'))
     {
        ans.push_back(aux);
     }

     for(auto it:ans)
     {
        cout<<it<<endl;
     }
}