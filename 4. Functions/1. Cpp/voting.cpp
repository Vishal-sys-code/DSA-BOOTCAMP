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

void voting_age(int age) {
	if (age >= 18) {
		cout << "You can vote now" << endl;
	}
	else {
		cout << "First desire then deserve" << endl;
	}
}

int main() {
	send_help();
	int age;
	cin >> age;
	voting_age(age);
	return 0;
}