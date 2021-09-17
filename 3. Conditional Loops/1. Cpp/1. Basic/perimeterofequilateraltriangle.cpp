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
	int side;
	cin >> side;
	int perimeter =  3 * (side);
	if (side <= 0) {
		cout << "Perimeter is negative" << endl;
	}
	else {
		cout << "Perimeter is:(Rounded off):-  " << perimeter << endl;
	}
	return 0;
}