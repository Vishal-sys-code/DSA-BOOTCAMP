#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1416

void send_help() {
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int product(int a, int b) {
	return a * b;
}

int main() {
	send_help();
	int a, b;
	cin >> a >> b;
	int ans = product(a, b);
	cout << "Result is: " << ans << endl;
	return 0;
}