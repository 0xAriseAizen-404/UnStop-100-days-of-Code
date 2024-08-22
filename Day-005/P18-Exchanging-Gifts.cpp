#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> giftsReceived(n + 1, 0);  

    for (int i = 0; i < m; ++i) {
        int x, y;
        cin >> x >> y;
        giftsReceived[y]++;  
    }

    int youngest = -1;
    for (int i = 1; i <= n; ++i) {
        if (giftsReceived[i] == n - 1) {
            youngest = i;
            break;
        }
    }

    cout << youngest << endl;
    return 0;
}