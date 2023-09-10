#include <bits/stdc++.h>
using namespace std;

vector<string> res;
void helper( vector<string> inp,int n,int k,int ind,string temp)
{
    if(temp.size()==n)
    {
        res.push_back(temp);
        return;
    }

    string a = inp[ind];
    for(auto it:a)
    {
        temp+=it;
        helper(inp,n,k,ind+1,temp);
    }
    return;
}
int main()
{
    int n=2;
    // cin>>n;
    int k=3;
    // cin>>k;
    vector<string> inp ={"abc","qwe"};
    // for(int i=0;i<n;i++)
    // {
    //     string s;
    //     cin>>s;
    //     inp.push_back(s);
    // }

string temp="";
    helper(inp,n,k,0,temp);

for(auto it:res)
{
    cout<<it<<" ";
}
cout<<endl;
    
    return 0;
}