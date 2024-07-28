#include <iostream>
#include <vector>
using namespace std;

vector<int> max_modulus(int t, const vector<pair<int, int>>& cases) {
    vector<int> results;
    for (const auto& case_pair : cases) {
        int l = case_pair.first;
        int r = case_pair.second;
        
        if (l == r) {
            results.push_back(0);
        } else if (2 * l > r) {
            results.push_back(r % l);
        } else {
            results.push_back((r - 1) / 2);
        }
    }
    return results;
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, int>> cases(t);
    for (int i = 0; i < t; ++i) {
        cin >> cases[i].first >> cases[i].second;
    }

    vector<int> results = max_modulus(t, cases);

    for (int result : results) {
        cout << result << endl;
    }

    return 0;
}
