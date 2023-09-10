#include<bits/stdc++.h>
using namespace std;

int ans=0;

void helper(string s,char a,char b,int index,string temp)
{
    if(index>=s.size())
    {
        return;
    }

    temp+=s[index];
    if(temp[0]==a && temp[temp.size()-1]==b)
    {
        ans++;
    }
    helper(s,a,b,index+1,temp);
    temp.pop_back();
    helper(s,a,b,index+1,temp);

    return;
}

void solve()
{
    string s;
    cin>>s;
    char a,b;
    cin>>a>>b;
    
    string temp="";
    helper(s,a,b,0,temp);

    cout<<ans<<endl;

    return;
}




int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        solve();
    }
    return 0;
}