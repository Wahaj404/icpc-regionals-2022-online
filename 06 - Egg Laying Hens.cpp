#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        stringstream ss(s);
        vector<int> days;
        string n;
        while (getline(ss, n, ',')) {
            days.push_back(stoi(n));
        }
        vector<int> len(days.size(), 1);
        int mx = 1;
        for (int i = 1; i < days.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (days[j] < days[i]) {
                    if (len[i] < len[j] + 1) {
                        len[i] = len[j] + 1;
                    }
                }
            }
            if (mx < len[i]) {
                mx = len[i];
            }
        }
        cout << mx << '\n';
    }
}