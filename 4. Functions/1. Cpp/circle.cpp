#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1416

void send_help() {
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void mensuration(double r) {
	if (r < 0) {
		cout << "Check your radius again!!!" << endl;
	}
	else {
		double circumference = (2 * PI * r);
		double area = (PI * r * r);
		cout << "Circumference: " << circumference << endl;
		cout << "Area: " << area << endl;
	}
}

int main() {
	send_help();
	double radius; cin >> radius;
	cout << "Result is: " << endl;
	mensuration(radius);
	return 0;
}