#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int year; cin >> year;
	if ((year % 400 == 0) || (year % 4 == 0)) {
		cout << "The year " << year << " is a leap year" << endl;
	}
	else {
		cout << "The year " << year << " is not a leap year" << endl;
	}
	return 0;
}