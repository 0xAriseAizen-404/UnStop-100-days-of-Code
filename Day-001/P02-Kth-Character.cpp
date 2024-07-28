#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, k; cin >> n >> k;
    string str; cin >> str;
    cout << str[str.size() - k] << endl; 
    return 0;
}