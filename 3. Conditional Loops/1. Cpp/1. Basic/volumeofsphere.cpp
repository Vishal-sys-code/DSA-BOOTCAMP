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
	double radius;
	cin >> radius;
	double circle = pi * (radius * radius * radius);
	double volume = (4 * circle) / 3;
	if (radius < 0 ) {
		cout << "VOLUME CANNOT BE NEGATIVE" << endl;
	}
	else {
		cout << "Volume is: " << volume << endl;
	}
	return 0;
}