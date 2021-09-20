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

/*
	1 - 100 unit - 5/=
	101-200 unit - 7/=
	201-300 unit - 10/=
	above 300 - 15/=
*/

int main() {
	send_help();
	int unit; cin >> unit;
	if (unit > 0 && unit <= 100) {
		cout << "Bill Amount is: " << (unit * 5) << endl;
	}
	else if (unit > 100 and unit <= 200) {
		cout << "Bill Amount is: " << (100 * 5) + (unit - 100) * 7 << endl;
	}
	else if (unit > 200 and unit <= 300) {
		cout << "Bill Amount is: " << (100 * 5) + (100 * 7) + (unit - 200) * 10 << endl;
	}
	else if (unit > 300) {
		cout << "Bill Amount is: " << (100 * 5) + (100 * 7) + (100 * 10) + (unit - 300) * 15 << endl;
	}
	else {
		cout << "NO NEED TO PAY THE BILLS " << endl;
	}
	return 0;
}