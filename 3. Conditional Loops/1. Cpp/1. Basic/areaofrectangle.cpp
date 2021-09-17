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
	int length, width;
	cin >> length >> width;
	if ((length < 0) && (width < 0)) {
		cout << "Area is negative" << endl;
	}
	else {
		cout << "Area is: " << (length * width) << endl;
	}
	return 0;
}