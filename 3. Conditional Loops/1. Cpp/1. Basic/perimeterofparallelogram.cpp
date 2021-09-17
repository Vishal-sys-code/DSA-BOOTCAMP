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
	int side1, side2;
	cin >> side1 >> side2;
	int perimeter =  2 * (side1 + side2);
	if (side1 <= 0 || side2 <= 0) {
		cout << "Perimeter is negative" << endl;
	}
	else {
		cout << "Perimeter is:(Rounded off):-  " << perimeter << endl;
	}
	return 0;
}