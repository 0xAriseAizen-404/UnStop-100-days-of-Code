#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool foundA = false;
    bool foundB = false;
    for (char c : s) {
        if (c == 'a') {
            if (foundB) { 
                cout << "NO" << endl;
                return 0;
            }
            foundA = true;
        }
        else if (c == 'b') {
            foundB = true;
        }
    }
    cout << "YES" << endl;
    return 0;
}
