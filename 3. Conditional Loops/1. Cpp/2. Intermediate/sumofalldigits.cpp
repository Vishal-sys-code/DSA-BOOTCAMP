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
	int n; cin >> n;
	int sum = 0, rem;
	while (n > 0) {
		rem = n % 10;
		sum += rem;
		n /= 10;
	}
	cout << "The sum of all digits is: " << sum << endl;
	return 0;
}