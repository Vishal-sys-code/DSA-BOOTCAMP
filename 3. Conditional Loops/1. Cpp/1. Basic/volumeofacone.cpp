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
	double radius, height;
	cin >> radius >> height;
	double length = height / 3;
	double circle = pi * (radius * radius);
	double volume = (circle * length);
	if (radius < 0 || height < 0) {
		cout << "VOLUME CANNOT BE NEGATIVE" << endl;
	}
	else {
		cout << "Volume is: " << volume << endl;
	}
	return 0;
}