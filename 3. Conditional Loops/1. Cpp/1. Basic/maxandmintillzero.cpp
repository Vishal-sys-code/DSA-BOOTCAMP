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
    int n;
    //cout << "How many numbers you want to enter: " << endl;
    cin >> n;
    int max = INT_MIN;
    int min = INT_MAX;
    for (int i = 0; i < n; ++i) {
        int num;
        //cout << "Enter number -" << i + 1 << ": ";
        cin >> num;
        if (num > max) max = num;
        if (num < min) min = num;
    }
    cout << "Maximum number is: " << max << endl;
    cout << "Minimum number is: " << min << endl;
    return 0;
}