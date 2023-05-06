#include <iostream>
#include <string>
using namespace std;

int main() {
    string c = "codeforces";
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int co = 0;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == c[i]) {
                continue;
            }
            else {
                co++;
            }
        }
        cout << co << endl;
    }
    return 0;
}
