#include <bits/stdc++.h>
using namespace std;


vector<bool> prime;
void sieve(int x, int y)
{

	prime.resize(y + 1, true);
	prime[1] = false;

	for (int i = 2; i * i <= y; i++) {
		if (prime[i])
			for (int j = i * i; j <= y; j += i) {
				prime[j] = false;
			}
	}
}

vector<int> allPrime(int l, int r)
{
	vector<int> result;
	for (int i = l; i <= r; i++) {
		if (prime[i]) {
			result.push_back(i);
		}
	}

	return result;
}

int main()
{
	int starting_range = 23;
	int ending_range = 42;

	sieve(starting_range, ending_range);

	vector<int> result
		= allPrime(starting_range, ending_range);

	int ans = result.size();
    cout<<ans<<endl;
	return 0;
}
