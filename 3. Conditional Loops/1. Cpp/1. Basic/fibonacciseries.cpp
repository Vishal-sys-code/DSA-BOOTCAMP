#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pi 3.14
#define endl "\n"

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int n;//number to be entered for the range of the fibonacci
	cin >> n;
	int a = 0;
	int b = 1;
	int c;
	cout << a << " " << b << " ";
	for (int i = 2; i < n; ++i) {
		c = a + b;
		cout << c << " ";
		a = b;
		b = c;
	}
	return 0;
}