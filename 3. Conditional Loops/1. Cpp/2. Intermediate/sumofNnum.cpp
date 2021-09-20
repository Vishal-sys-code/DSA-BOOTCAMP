#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;
	cin >> n;
	int sum = 0;
	if (n <= 0) {
		cout << "Sum cannot be evaluated";
	}
	else {
		for (int i = 0; i <= n; i++) {
			sum += i;
		}
	}
	cout << "Sum is: " << sum << endl;
	return 0;
}