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
	double discount, amount, markedprice, s;
	cin >> markedprice;
	cin >> discount;
	s = 100 - discount;
	amount = (s * markedprice) / 100;
	cout << amount;
	return 0;
}