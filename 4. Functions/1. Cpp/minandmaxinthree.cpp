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

void compare_max(int a, int b, int c) {
	if (a > b && a > c) {
		cout << "The maximum number is :" << a << endl;
	}
	else if (b > a && b > c) {
		cout << "The maximum number is :" << b << endl;
	}
	else {
		cout << "The maximum number is :" << c << endl;
	}
}

void compare_min(int a, int b, int c) {
	if (a < b && a < c) {
		cout << "The minimum number is :" << a << endl;
	}
	else if (b < a && b < c) {
		cout << "The minimum number is :" << b << endl;
	}
	else {
		cout << "The minimum number is :" << c << endl;
	}
}

int main() {
	send_help();
	int a, b, c;
	cin >> a >> b >> c;
	compare_max(a, b, c);
	compare_min(a, b, c);
	return 0;
}