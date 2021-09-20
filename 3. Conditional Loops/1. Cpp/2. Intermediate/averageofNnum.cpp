#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"
int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	int num; cin >> num;
	int sum = 0;
	float avg;
	for (int i = 0; i < num; i++) {
		sum += i;
	}
	avg = sum / num;
	cout << "Average of " << num << " numbers are: " << avg << endl;
	return 0;
}