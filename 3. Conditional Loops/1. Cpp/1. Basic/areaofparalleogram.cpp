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
	int base, height;
	cin >> base >> height;
	if ((base <= 0) || (height <= 0)) {
		cout << "AREA IS NEGATIVE" << endl;
	}
	else {
		cout << "Area is: " << (base * height) << endl;
	}
	return 0;
}