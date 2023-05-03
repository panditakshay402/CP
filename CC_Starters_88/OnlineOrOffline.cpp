#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
       // float dis = (n-((0.1*n)))
        if ((n - ((0.1 * n))) < m) cout << "ONLINE" << endl;
        else if ((n - ((0.1 * n))) > m) cout << "DINING" << endl;
        else cout << "EITHER" << endl;
    }
    return 0;
}