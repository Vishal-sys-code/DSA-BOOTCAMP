#include <bits/stdc++.h>
using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
	#freopen("input.in","r",stdin);
	#freopen("output.in","w",stdout);
	#endif*/

	int n;
	cout << "Enter the number of elements" << endl;
	cin >> n;
	int sum = 0;
	int physics_marks[n];
	cout << "Enter the elements" << endl;
	for (int i = 0; i < n; i++) cin >> physics_marks[i];
	for (int x : physics_marks) sum += x;
	cout << "Average: " << (sum / n) << endl;
}
