#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	ll n; cin >> n;
	if (n % 2 == 0) cout << "EVEN" << endl;
	else cout << "ODD" << endl;
	return 0;
}