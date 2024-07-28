#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    int maxAltitude = 0;
    int netAltitude = 0;
    for (int i=0; i<n; ++i) {
        int x; cin >> x;
        netAltitude += x;
        maxAltitude = max(maxAltitude, netAltitude);
    }
    cout << maxAltitude << endl;
    return 0;
}