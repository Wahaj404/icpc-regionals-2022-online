#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long n, m;
        cin >> n >> m;
        long min = n * m;
        long max = (min * (min + 1)) / 2;
        cout << min << ' ' << max << '\n';
    }
}