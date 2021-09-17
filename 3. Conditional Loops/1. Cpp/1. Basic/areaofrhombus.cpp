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

	//for base and height
	int base, height;
	cin >> base >> height;
	if ((base <= 0) || (height <= 0)) {
		cout << "AREA IS NEGATIVE" << endl;
	}
	else {
		cout << "Area (when base and height are given): " << (base * height) << endl;
	}
	cout << "-------------------------------" << endl;
	//for diagonals
	int diagonal1, diagonal2;
	cin >> diagonal1 >> diagonal2;
	if ((diagonal1 <= 0) || (diagonal2 <= 0)) {
		cout << "AREA IS NEGATIVE" << endl;
	}
	else {
		cout << "Area (when both diagonals are given): " << ((diagonal1 * diagonal2) / 2) << endl;
	}
	return 0;
}