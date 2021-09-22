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

void oddeven_basic(int n) {
	if (n % 2 == 0) {
		cout << "Entered number is EVEN" << endl;
	}
	else {
		cout << "Entered number is ODD" << endl;
	}
}

void oddeven_bitwiseOR(int n) {
	if ((n | 1) > n) {
		cout << "Entered number is EVEN" << endl;
	}
	else {
		cout << "Entered number is ODD" << endl;
	}
}

void oddeven_bitwiseAND(int n) {
	if ((n & 1) == 1) {
		cout << "Entered number is ODD" << endl;
	}
	else {
		cout << "Entered number is EVEN" << endl;
	}
}

void oddeven_bitwiseXOR(int n) {
	if ((n ^ 1) == n + 1) {
		cout << "Entered number is EVEN" << endl;
	}
	else {
		cout << "Entered number is ODD" << endl;
	}
}

int main() {
	send_help();
	int n;
	cin >> n;
	cout << "--- ODD AND EVEN ---" << endl;
	cout << "--------------------------" << endl;
	cout << "From Basic Method: " << endl;
	oddeven_basic(n);
	cout << "--------------------------" << endl;
	cout << "From BitWise OR Method : " << endl;
	oddeven_bitwiseOR(n);
	cout << "--------------------------" << endl;
	cout << "From BitWise AND Method : " << endl;
	oddeven_bitwiseAND(n);
	cout << "--------------------------" << endl;
	cout << "From BitWise XOR Method : " << endl;
	oddeven_bitwiseXOR(n);
	return 0;
}