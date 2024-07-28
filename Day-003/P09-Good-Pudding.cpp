#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t; cin >> t;
    // cin.ignore();
    while (t--) {
        string str; cin >> str;
        if (str[str.size() - 1] == '0') cout << 0 << endl;
        else cout << 1 << endl;
    }   
    return 0;
}