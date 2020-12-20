#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, m;
	cin >> n >> m;
	set<int> a, b;
	//create two sets since all numbers are distinct
	for(int i=0; i<n; ++i) {
		int x;
		cin >> x;
		a.insert(x);
	}
	for(int i=0; i<m; ++i) {
		int x;
		cin >> x;
		b.insert(x);
	}
	int cnt=0;
	//there will be two conditions
	if(n<m) {
		//if n is less than m, then we iterate in set b while checking if it's in a
		for(auto x : b)
			if(a.find(x)!=a.end())
				cnt++;
	} else {
		//if n is greater than m, then we iterate in set a while checking if it's in b
		for(auto x : a)
			if(b.find(x)!=b.end())
				cnt++;
	}
	cout << cnt << "\n";
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--)
		solve();
}
