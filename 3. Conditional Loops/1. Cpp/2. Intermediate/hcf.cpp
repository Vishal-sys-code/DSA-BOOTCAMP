#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"

int gcd(int a, int b) {
	if (b == 0) return a;
	return (gcd(b, a % b));
}

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int a, b; cin >> a >> b;
	int hcf1 = __gcd(a, b); //STL ALGORITHM
	int hcf2 = gcd(a, b);
	cout << "HCF BY STL IS:" << hcf1 << endl;
	cout << "HCF BY RECURSION IS: " << hcf2 << endl;
	return 0;
}