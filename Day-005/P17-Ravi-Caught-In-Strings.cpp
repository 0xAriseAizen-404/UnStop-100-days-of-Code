#include <iostream>
#include <algorithm>
using namespace std;

int getPalindromeLength(const string& str, int left, int right) {
    while (left >= 0 && right < str.length() && str[left] == str[right]) {
        left--;
        right++;
    }
    return right - left - 1;  // right - left + 1 - 2
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    
    int n; cin >> n;
    string str; cin >> str;
    
    int maxL = 0;
    for (int i = 0; i < str.length(); ++i) {
        int l1 = getPalindromeLength(str, i, i);      // Odd length palindromes
        int l2 = getPalindromeLength(str, i, i + 1);  // Even length palindromes
        int l = max(l1, l2);
        maxL = max(maxL, l);
    }
    
    cout << maxL << endl;
    return 0;
}
