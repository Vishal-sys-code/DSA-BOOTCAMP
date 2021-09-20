#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int x1, x2, y1, y2;
	cin >> x1 >> x2 >> y1 >> y2;
	int A = (x2 - x1);
	int B = (y2 - y1);
	int first_part = A * A;
	int second_part = B * B;
	float distance = sqrt(first_part + second_part);
	cout << "Distance between " << "(" << x1 << " , " << x2 << " , " << y1 << " , " << y2 << ")" << " is: " << distance << endl;
	return 0;
}