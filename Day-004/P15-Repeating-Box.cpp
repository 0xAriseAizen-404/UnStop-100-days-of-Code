#include <iostream>
#include <map>
using namespace std;

int main() {
    int n2; 
    cin >> n2;
    int n = n2 / 2; // Since there are 2*n boxes
    map<int, int> mapp;
    
    for (int i = 0; i < n2; ++i) {
        int x; 
        cin >> x;
        mapp[x]++;
    }
    
    for (auto &entry : mapp) {
        if (entry.second == n) {
            cout << entry.first << endl;
            break;
        }
    }


    // int* mapp = new int[10001]();
    // for (int i=0; i<n2; ++i) {
    //     int x; cin >> x;
    //     mapp[x]++;
    // }
    // for (int i=0; i<n2; ++i) {
    //     if (mapp[i] == n) {
    //         cout << i << endl;
    //         break;
    //     }
    // }
    // delete[] mapp;
    return 0;
}