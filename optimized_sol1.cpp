#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, m;
	cin >> n >> m;
	set<int> s;
	for(int i=0; i<n; ++i) {
		int x;
		cin >> x;
		s.insert(x);
	}
	//check if x already exists in the set
	int cnt=0;
	for(int i=0; i<m; ++i) {
		int x;
		cin >> x;
		if(s.find(x)!=s.end())
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
