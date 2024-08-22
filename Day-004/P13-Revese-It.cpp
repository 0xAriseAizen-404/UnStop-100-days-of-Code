#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void reverseAString(string &str, int start, int end) {
    if (start < end) {
        char x = str[start];
        str[start] = str[end];
        str[end] = x;

        reverseAString(str, ++start, --end);
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string str; cin >> str;
    char ch; cin >> ch;
    int n = str.size();
    int Ind = n - 1;
    for (int i=n-1; i>=0; --i) 
        if (str[i] == ch) {
            Ind = i;
            break;
        }
    reverseAString(str, Ind, n - 1);
    cout << str << endl;
    return 0;
}