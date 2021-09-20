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
	double amount, commision, commision_rate;
	cout << "Enter the amount: " << endl;
	cin >> amount;
	cout << "Enter the commision_rate: " << endl;
	cin >> commision_rate;
	commision = (commision_rate / 100) * amount;
	cout << "Commision is: "  << commision;
	return 0;
}