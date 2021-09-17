#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int principal, rate, time;
	cin >> principal >>  rate >>  time;
	int amount = 0;
	if (((rate == 0) || (rate < 0)) || ((time == 0) || (time < 0))) cout << "Amount is: " << "0" << endl;
	else {
		amount = (principal * rate * time) / 100;
	}
	cout << "Amount is: " << amount << endl;
	return 0;
}