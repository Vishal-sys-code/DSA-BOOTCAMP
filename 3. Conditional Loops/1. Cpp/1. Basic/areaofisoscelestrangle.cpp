#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define FIO ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define pi 3.14
#define endl "\n"

float height(float a, float b)
{
	return sqrt(pow(a, 2) - (pow(b, 2) / 4));
}

int main() {
	FIO;
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	float a, b;
	cin >> a >> b;
	float height1 = height(a, b);
	cout << setprecision(3);
	cout << "Height: " << height1 << endl;
	float area = (b * height1) / 2;
	cout << "Area: " << area << endl;
	return 0;
}