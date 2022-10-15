#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
    string a,b; cin >> a >> b;
    char ca = a.back();
    char cb = b.back();
    if (ca == cb) {
        if (a.size() == b.size()) cout << '=';
        else if (ca == 'S') {
            cout << (a.size() < b.size() ? '>' : '<');
        } else {
            cout << (a.size() < b.size() ? '<' : '>');
        }
    }else cout << (ca < cb ? '>' : '<');
    cout << '\n';
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