#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
    int n;
    cin>>n;
    string temp = to_string(n);

    int ptr=1;
    int steps=0;
    for(int i=0;i<4;i++)
    {
        if(temp[i]!='0')
        {
             steps+=abs((temp[i]-'0')-ptr)+1;
             ptr = temp[i]-'0';
        }
        cout<<steps<<" "<<ptr<<endl;
        
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