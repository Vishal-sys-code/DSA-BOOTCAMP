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
	char c;
	bool islowerCase, isupperCase;
	cout << "Enter any Character";
	cin >> c;
	islowerCase = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
	isupperCase = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
	if (!isalpha(c)) {
		cout << "Your Character doesn't match" << endl;
	}
	else if (islowerCase || isupperCase) {
		cout << "Your Character is a:  VOWEL" << endl;
	}
	else {
		cout << "Your Character is a:  CONSONANT" << endl;
	}
	return 0;
}