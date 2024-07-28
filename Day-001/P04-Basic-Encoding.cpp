#include <iostream>
#include <unordered_map>
#include <vector>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    
    unordered_map<int, int> frequency;
    int min_freq = INT_MAX;
    int max_freq = INT_MIN;
    
    // Read queries and build frequency map
    for (int i = 0; i < q; ++i) {
        int a, b;
        cin >> a >> b;
        frequency[b] += a;
    }
    
    // Find min and max frequencies in a single pass
    for (const auto& entry : frequency) {
        int freq = entry.second;
        if (freq < min_freq) {
            min_freq = freq;
        }
        if (freq > max_freq) {
            max_freq = freq;
        }
    }

    // If min_freq == max_freq, the difference is 0
    if (min_freq == max_freq) {
        cout << 0 << endl;
        return 0;
    }
    
    int min_num = INT_MAX;
    int max_num = INT_MIN;

    // Collect numbers with min and max frequencies in a single pass
    for (const auto& entry : frequency) {
        int num = entry.first;
        int freq = entry.second;
        if (freq == min_freq) {
            min_num = min(min_num, num);
        }
        if (freq == max_freq) {
            max_num = max(max_num, num);
        }
    }
    
    // Calculate and print the maximum absolute difference
    int max_difference = abs(max_num - min_num);
    cout << max_difference << endl;

    return 0;
}
