#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int len = s.length();

    for (int i = 1; i < (1 << len); i++) {
        string ans = "";

        for (int j = 0; j < len; j++) {
            if (i & (1 << j)) {
                ans += s[j];
            }
        }

        cout << ans << endl;
    }

    return 0;
}
