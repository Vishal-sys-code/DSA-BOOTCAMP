#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define endl "\n"

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int rupiya;
	cin >> rupiya;
	double dollars;
	if (rupiya < 0) cout << "Paisa Nikalo Daalo" << endl;
	else {
		dollars = (rupiya / 73.50);
	}
	cout << "Dollars: " << dollars << endl;
	return 0;
}