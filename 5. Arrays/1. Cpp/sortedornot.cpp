#include <bits/stdc++.h>
using namespace std;

int main() {

	/*#ifndef ONLINE_JUDGE
	#freopen("input.in","r",stdin);
	#freopen("output.in","w",stdout);
	#endif*/

	int arr[5] = {45, 99, 66, 2, 21};
	bool isSorted = false;
	for (int i = 0; i < 5; i++) {
		if (arr[i] > arr[i + 1]) {
			isSorted = false;
			break;
		}
	}
	if (isSorted) cout << "Sorted in nature" << endl;
	else cout << "NOT Sorted in nature" << endl;
	return 0;
}