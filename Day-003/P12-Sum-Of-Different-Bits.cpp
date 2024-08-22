#include <iostream>
#include <string>
using namespace std;

int distanceAB(const string& a, const string& b_sub) {
    int dis = 0;
    for (int i=0; i<a.size(); ++i) {
        // cout << abs((a[i] - '0') - (b_sub[i] - '0')) << endl;
        dis += abs((a[i] - '0') - (b_sub[i] - '0'));
    }
    return dis;
}

int main() {
    string a, b;
    cin >> a >> b;
    int len_a = a.size();
    int len_b = b.size();
    int count = 0;

    for (int i = 0; i <= len_b - len_a; ++i) {
        count += distanceAB(a, b.substr(i, len_a));
    }

    cout << count << endl;
    return 0;
}