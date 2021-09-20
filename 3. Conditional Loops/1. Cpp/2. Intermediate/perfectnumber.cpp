#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"

void send_help() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	send_help();
	int n, sum = 0, rem, i;
	cin >> n;
	for (i = 1; i < n; i++) {
		rem = n % i;
		if (rem == 0) {
			sum += i;
		}
	}
	if (sum == n) {
		cout << i << " is a perfect number";
	}
	else {
		cout << i << " is not a perfect number";
	}
	return 0;
}