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


int main() {
	send_help();
	int subjects = 0;
	double totalMarks = 0, percentage;
	cout << "Enter Number of Subject" << endl;
	cin >> subjects;
	cout << "Enter The Marks Of The " << subjects << " Subject: " << endl;
	for (int i = 0; i < subjects; i++) {
		cin >> totalMarks;
	}
	cout << "Total Marks: " << totalMarks << endl;
	percentage = (totalMarks / (subjects * 100)) * 100;
	switch ((int)percentage / 10) {
	case 9:
		cout << "Grade: O" << endl;
		break;
	case 8:
		cout << "Grade: A+" << endl;
		break;
	case 7:
		cout << "Grade: A" << endl;
		break;
	case 6:
		cout << "Grade: B" << endl;
		break;
	case 5:
		cout << "Grade: C" << endl;
		break;
	default:
		cout << "Grade: D" << endl;
		break;
	}
	return 0;
}