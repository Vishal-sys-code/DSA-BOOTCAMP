#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define send ios_base::sync_with_stdio(false)
#define help cin.tie(0), cout.tie(0)
#define endl "\n"

int main() {
	send;
	help;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int year; cin >> year;
	if ((year % 400 == 0) || (year % 4 == 0)) cout << "LEAP YEAR" << endl;
	else cout << "NOT A LEAP YEAR" << endl;
	return 0;
}