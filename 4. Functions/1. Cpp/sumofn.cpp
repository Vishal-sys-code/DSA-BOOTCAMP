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

int sumnnum(int num) {
	int sum = 0;
	for (int i = 1; i <= num; i++) {
		sum += i;
	}
	return sum;
}

int main() {
	send_help();
	int n;
	cin >> n;
	cout << sumnnum(n) << endl;
	return 0;
}