#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int k = v[0];
    for(auto it:v)
    {
        k = max(k,it);
    }
    vector<int> temp(k+1);

    for(int i=0;i<n;i++)
    {
        temp[v[i]]++;
    }

    for(int i=1;i<=k;i++)
    {
        temp[i]+=temp[i-1];
    }

    vector<int> output(n);
    for(int i=n-1;i>=0;i--)
    {
        output[--temp[v[i]]]=v[i];
    }

    for(int i=0;i<n;i++)
    {
        cout<<output[i]<<" ";
    }
    cout<<endl;
    return 0;
}