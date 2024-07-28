#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n; cin >> n;
    if ((n&1) == 1) cout << (n*2 - 1) << endl;
    else cout << (n*2) << endl;
    return 0;
}