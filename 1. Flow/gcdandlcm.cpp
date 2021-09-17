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
	int a, b; cin >> a >> b;
	int gcd = __gcd(a, b);
	int lcm = (a * b) / gcd;
	cout << "HCF: " << gcd << endl;
	cout << "LCM: " << lcm << endl;
	return 0;
}