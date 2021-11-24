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
	int array[n];
	cout << "Enter the elements" << endl;
	for (int i = 0; i < n; i++) cin >> array[i];
	for (int x : array) sum += x;
	cout << "Sum is:  " << (sum) << endl;
	return 0;
}
