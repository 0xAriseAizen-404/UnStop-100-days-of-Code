#include <iostream>
#include <unordered_map>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    unordered_map<string, int> stringCount;
    vector<string> inputStrings(n);

    for (int i = 0; i < n; ++i) {
        cin >> inputStrings[i];
        stringCount[inputStrings[i]]++;
    }

    cin >> k;

    vector<string> uniqueStrings;

    for (const string& str : inputStrings) {
        if (stringCount[str] == 1) {
            uniqueStrings.push_back(str);
            stringCount[str] = 0;
        }
    }

    if (k <= uniqueStrings.size()) {
        cout << uniqueStrings[k-1] << endl;
    } else {
        cout << "" << endl;
    }

    return 0;
}
