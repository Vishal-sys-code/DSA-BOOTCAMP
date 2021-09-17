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
	double side;
	cin >> side;
	double area = 6 * side * side;
	if (side <= 0) {
		cout << "Area connot be negative" << endl;
	}
	else {
		cout << "Total Surface Area is: " << area << endl;
	}
	return 0;
}