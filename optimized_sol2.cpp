#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ar array

void solve() {
	int n, m;
	cin >> n >> m;
	bool vis[105];
	memset(vis, 0, sizeof(vis));
	for(int i=0; i<n; ++i) {
		int x;
		cin >> x;
		vis[x]=1;
	}
	//check if the 'x' value is already visited in the boolean array
	int cnt=0;
	for(int i=0; i<m; ++i) {
		int x;
		cin >> x;
		if(vis[x])
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
