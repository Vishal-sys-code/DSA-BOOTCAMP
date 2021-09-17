#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define send ios_base::sync_with_stdio(false)
#define help cin.tie(0), cout.tie(0)
#define endl "\n"

int main() {
	send;
	help;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num; cin >> num;
	for (int i = 1; i <= 10; ++i) {
		cout << num << " x "  << i << " = " << (num * i) << endl;
	}
	return 0;
}