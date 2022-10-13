#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve()
{
    int n;
    cin>>n;
    vector<int> v;
    int aux;
    for(int i=0;i<n;i++)
    {
        cin>>aux;
        v.push_back(aux);
    }
        int p=0,m=0,flag=1;

      for (int i=0;i<n;i++){
            if (v[i]<0){
                m++;
            }
            else {
                p++;
            }
        }
        for (int i=0;i<m;i++){
            if (v[i]>0){
                v[i]=v[i]*(-1);
            }
        }
        for (int i=m;i<n;i++){
            if (v[i]<0){
                v[i]=v[i]*(-1);
            }
        }
        for (int i=0;i<n-1;i++){
            if (v[i]>v[i+1]){
                flag=0;
                break;
            }
        }
        if (flag == 1){
            cout << "YES" << endl;
        }
        else {
            cout << "NO" << endl;
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