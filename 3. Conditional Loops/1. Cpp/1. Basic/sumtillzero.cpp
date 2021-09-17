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
    int num;
    int sum = 0;
    do {
        cin >> num;
        sum += num;
    } while (num != 0);
    cout << "SUM is: " << sum << endl;
    return 0;
}