//FOR RIGHT-ANGLED TRIANGLE
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
	int l, h;
	cin >> l >> h;
	int area = 0;
	if ((l <= 0) && (h <= 0)) {
		cout << "Area is negative" << endl;
	}
	else {
		area = 0.5 * l * h;
		cout << area << endl;
	}
	return 0;
}