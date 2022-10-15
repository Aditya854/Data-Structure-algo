#include <bits/stdc++.h>
using namespace std;


bool sortByVal(const pair<string, int> &a,  const pair<string, int> &b) 
{ 
    return (a.second > b.second); 
} 


void solve() {
   char g[8][8];
	vector<int> r;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> g[i][j];
			if (g[i][j] == 'R') {r.push_back(i);}
		}
	}
	for (int i : r) {
	    bool ok = true;
	    for (int j = 0; j < 8; j++) {
	        if (g[i][j] != 'R') {ok = false; break;}
	    }
	    if (ok) {cout << "R\n"; return;}
	}
	cout << "B\n";
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