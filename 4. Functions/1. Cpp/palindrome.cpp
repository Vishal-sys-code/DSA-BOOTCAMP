#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define PI 3.1416

void send_help() {
	ios_base::sync_with_stdio();
	cin.tie();
	cout.tie();
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int palindrome(int num, int temp) {
	if (num == 0) {
		return temp;
	}
	temp = (temp * 10) + (num % 10);
	return palindrome(num / 10, temp);
}

int main() {
	send_help();
	int num; cin >> num;
	int temp = palindrome(num, 0);
	if (temp == num) {
		cout << num << " is a palindrome" << endl;
	}
	else {
		cout << num << " is a not palindrome" << endl;
	}
	return 0;
}