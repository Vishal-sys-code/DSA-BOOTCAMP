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

int main() {
	send_help();
	long long int amount, depreciation, year, temp;
	cin >> amount;
	cin >> depreciation;
	cin >> year;
	temp = amount;
	for (int i = 0; i < year; i++) {
		temp = ((100 - depreciation) * temp) / 100;
	}
	cout << temp << endl;
	return 0;
}