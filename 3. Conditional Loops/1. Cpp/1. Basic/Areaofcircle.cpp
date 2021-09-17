#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pi 3.14
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int radius;
	cin >> radius;
	double area;
	if (radius < 0) {
		cout << "Area cannot be found" << endl;
	}
	else {
		area = pi * radius * radius;
		cout << "Area is : " << area << endl;
	}
	return 0;
}