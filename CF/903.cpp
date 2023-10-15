#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
    // int n,m;
    // cin>>n>>m;
    // string a,b;
    // cin>>a;
    // cin>>b;

    // for(int i=0;i<6;i++)
    // {
    //     if(a.find(b)!=string::npos)
    //     {
    //         cout<<i<<endl;
    //         return;
    //     }
    //     a+=a;
    // }
    // cout<<-1<<endl;

    int a,b,c;
    cin>>a>>b>>c;
    if(a==b && b==c)
    {
        cout<<"YES"<<endl;
        return;
    }

    // int mini = min(a,min(b,c));

    vector<int> temp;
    temp.push_back(a);
    temp.push_back(b);
    temp.push_back(c);

    sort(temp.begin(),temp.end());

    int mini = temp[0];

    if(temp[1]%mini!=0 || temp[2]%mini!=0)
    {
        cout<<"NO"<<endl;
        return;
    }

    if(temp[1]/mini -1 + temp[2]/mini -1 <=3)
    {
        cout<<"YES"<<endl;
        return;
    }
    cout<<"NO"<<endl;
    return;
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