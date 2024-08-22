#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    int count = 0;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            for (int k = 0; k < n; ++k) {
                if ((arr[i] & arr[j] & arr[k]) == 0) {
                    ++count;
                }
            }
        }
    }
    
    cout << count << endl;
    return 0;
}