#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num;
	cin >> num;
	int factorial = 1;
	if (num == 1 || num == 0) cout << "Factorial is: " << "1" << endl;
	for (int i = 1; i <= num; i++) {
		factorial *= i;
	}
	cout << "Factorial is:" << " " << factorial << endl;
}