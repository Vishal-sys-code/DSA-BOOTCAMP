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
	int num, temp, rem, result = 0;
	cin >> num;
	temp = num;
	while (temp != 0) {
		rem = temp % 10;
		result += rem * rem * rem;
		temp /= 10;
	}
	if (result == num) cout << num << " is an Armstrong Number.";
	else cout << num << " is not an Armstrong Number.";
	return 0;
}