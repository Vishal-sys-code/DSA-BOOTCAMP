#include <bits/stdc++.h>
using namespace std;
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

int fact(int num) {
	int fact = 1, i;
	for (i = 1; i <= num; i++) {
		fact = fact * i;
	}
	return fact;
}


int main() {
	send_help();
	int n, r;
	cout << "N: ";
	cin >> n;
	cout << endl;
	cout << "R: ";
	cin >> r;
	cout << endl;
	cout << "NCR = " << (fact(n) / (fact(n - r)*fact(r))) << endl;
	cout << "NPR = " << (fact(n) / (fact(n - r))) << endl;
	return 0;
}