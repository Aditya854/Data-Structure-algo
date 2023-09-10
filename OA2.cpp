#include <bits/stdc++.h>
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
   
    vector<vector<int>> temp;

    for(int i=0;i<n;i++)
    {
        vector<int> aux;
        for(int j=i;j<n;j++)
        {
            aux.push_back(v[j]);
            temp.push_back(aux);
        }
    }

    for(auto it:temp)
    {
        for(auto itt:it)
        {
            cout<<itt<<" ";
        }
        cout<<endl;
    }


    return 0;
}