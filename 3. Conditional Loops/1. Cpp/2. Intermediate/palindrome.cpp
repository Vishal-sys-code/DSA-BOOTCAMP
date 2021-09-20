#include <bits/stdc++.h>
using namespace std;
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define ll long long
#define endl "\n"

void send_help() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	send_help();
	int num, rem, rev = 0;
	cin >> num;
	int temp = num;
	do {
		rem = num % 10;
		rev = (rev * 10) + rem;
		num /= 10;
	} while (num != 0);
	if (temp == rev) {
		cout << temp << " is a Palindrome Number" << endl;
	}
	else {
		cout << temp << " is not a Palindrome Number" << endl;
	}
	return 0;
}