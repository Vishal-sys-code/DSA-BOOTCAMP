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
	double part1 = side * side;
	double part2 = (sqrt(3)) / 4;
	double area = part1 * part2;
	if (side <= 0) {
		cout << "Side cannot be negative" << endl;
	}
	else {
		cout << "Area is: " << area << endl;
	}
	return 0;
}