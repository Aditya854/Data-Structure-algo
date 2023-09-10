#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string s;
    cin>>s;
    stack<char> st;
    bool ans = true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
        {
            st.push(s[i]);
        }
        else{
           if(!st.empty())
           {
            if((s[i]==')'&& st.top()=='(') || (s[i]=='}'&& st.top()=='{') || (s[i]==']'&& st.top()=='['))
            {
                st.pop();
            }
            else{
                ans = false;
                break;
            }
           }
           else{
            ans = false;
            break;
           }
        }
    }

    if(ans)
    {
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
return 0;
}