#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pi 3.14
#define endl "\n"

int subtractProductAndSum(int num) {
	int rem;
	int product = 1, sum = 0;
	if (num == 0 || num == 1) {
		return -1;
	}
	while (num != 0) {
		rem = num % 10;
		product *= rem;
		sum += rem;
		num /= 10;
	}
	return (product - sum);
}

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num;
	cin >> num;
	cout << subtractProductAndSum(num) << endl;
	return 0;
}