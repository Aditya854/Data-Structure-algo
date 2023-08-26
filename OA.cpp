#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin>>k;

    string s;
    cin>>s;
    
    int n = s.size();
    int i=0;
    int j=0;
    vector<string> ans;
    int cnt=0;

    cout<<"Test"<<endl;
    while(j<n)
    {
        if(s[j]=='1')
        {
            cnt++;
        }
        while(i<j && cnt>k)
        {
            if(s[i]=='1')
            {
                cnt--;
            }
            i++;
        }

        while(cnt==k)
        {
            string aux = s.substr(i,j-i+1);
            ans.push_back(aux);
            if(s[i]=='1')
            {
                cnt--;
            }
            i++;
        }

        j++;
    }
    cout<<"Test"<<endl;
cout<<ans.size()<<endl;
    for(auto it:ans)
    {
        cout<<it<<endl;
    }
    return 0;
}