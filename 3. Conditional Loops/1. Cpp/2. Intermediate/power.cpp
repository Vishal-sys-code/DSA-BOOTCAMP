#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b;
	cin >> a >> b;
	int power;
	if (b <= 0) {
		cout << "Power cannot be calculated" << endl;
	}
	else {
		cout << "Power is: " << pow(a, b) << endl;
	}
	return 0;
}