#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	int ans = 0;
	char op; cin >> op;
	if (op == '+') {
		ans = a + b;
		cout << ans << endl;
	}
	if (op == '-') {
		if (a > b) ans = a - b;
		else ans = b - a;
		cout << ans << endl;
	}
	if (op == '*') {
		ans = a * b;
		cout << ans << endl;
	}
	if (op == '/') {
		ans = a / b;
		cout << ans << endl;
	}

	return 0;
}