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
	double length, width, height;
	cin >> length >> width >> height;
	double calculation = (length * width * height);
	double volume = calculation / 3;
	if (length <= 0 || width <= 0 || height <= 0) {
		cout << "Volume cannot be negative" << endl;
	}
	else {
		cout << setprecision(4);
		cout << "Volume is: " << volume << endl;
	}
	return 0;
}