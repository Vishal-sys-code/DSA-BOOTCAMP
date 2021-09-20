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
	int sum = 0;
	sum = a + b;
	if (a <= 0 && b <= 0) {
		cout << "Addition can't be done" << endl;
	} else {
		cout << "Result is: " << sum << endl;
	}
	return 0;
}