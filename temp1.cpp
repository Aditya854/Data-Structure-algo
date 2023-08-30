#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1;
    getline(cin,s1);

    string s2;
    getline(cin,s2);

    int ans = INT_MIN;
    bool flag=true;
    int temp_i=-1;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]==s2[0] && flag==true)
        {
            flag=false;
            temp_i=i;
        }
        else if(s1[i]==s2[0] && flag==false)
        {
           ans = max(ans,i-temp_i);
           temp_i=i;
        }
    }

    cout<<ans-1<<endl;
    return 0;
}