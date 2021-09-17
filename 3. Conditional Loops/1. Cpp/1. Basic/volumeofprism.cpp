#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pi 3.14
#define endl "\n"

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	double x_axis_measurment, y_axis_measurment, z_axis_measurment;
	cin >> x_axis_measurment >> y_axis_measurment >> z_axis_measurment;
	double volume = (x_axis_measurment) * (y_axis_measurment) * (z_axis_measurment);
	if (x_axis_measurment < 0 || y_axis_measurment < 0 || z_axis_measurment < 0) {
		cout << "VOLUME CANNOT BE NEGATIVE" << endl;
	}
	else {
		cout << "Volume is: " << volume << endl;
	}
	return 0;
}