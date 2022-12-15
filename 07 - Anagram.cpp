#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore(INT_MAX, '\n');
    while (t--) {
        string a, b;
        getline(cin, a);
        getline(cin, b);
        int c[26] = {0}, d[26] = {0};
        for (int i = 0; i < a.length(); ++i) {
            if (a[i] != ' ') {
                ++c[a[i] - 'a'];
            }
        }
        for (int i = 0; i < b.length(); ++i) {
            if (b[i] != ' ') {
                ++d[b[i] - 'a'];
            }
        }
        bool possible = true;
        for (int i = 0; i < 26; ++i) {
            if (c[i] < d[i]) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "Possible\n" : "Not possible\n");
    }
}