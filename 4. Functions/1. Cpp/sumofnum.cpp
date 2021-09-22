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

void add(int a, int b) {
	int sum = 0;
	if (a > 0 and b > 0) {
		sum = a + b;
		cout << "SUM IS: " << sum << endl;
	}
	else {
		cout << "Check the number again!!!" << endl;
	}
}

int main() {
	send_help();
	int a, b;
	cin >> a >> b;
	add(a, b);
	return 0;
}