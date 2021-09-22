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

int factorial(int n) {
	if (n == 0) return 1;
	else return (n * factorial(n - 1));
}

int main() {
	send_help();
	int n;
	cin >> n;
	int fact = factorial(n);
	cout << "Factorial is: " << fact << endl;
	return 0;
}