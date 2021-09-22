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

bool isPrime(int n, int i) {
	if (n <= 2)
		return (n == 2) ? true : false;
	if (n % i == 0)
		return false;
	if (i * i > n)
		return true;

	return isPrime(n, i + 1);
}

int main() {
	send_help();
	int n;
	cin >> n;
	if (isPrime(n, 2)) {
		cout << " YES " << endl;
	}
	else {
		cout << " NO " << endl;
	}
	return 0;
}