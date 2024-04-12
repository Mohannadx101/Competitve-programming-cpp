// Link : https://codeforces.com/problemset/problem/158/A
// 60ms / 100kb
#include <iostream>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int currentValue, previousValue;
 
    for (int i = 0; i < k; ++i) {
        cin >> currentValue;
        if (currentValue == 0) {
            cout << i << endl;
            return 0;
        }
        previousValue = currentValue;
    }
 
    
    for (int i = k; i < n; ++i) {
        cin >> currentValue;
        if (currentValue != previousValue) {
            cout << i << endl;
            return 0;
        }
    }
 
    cout << n << endl;
    return 0;
}
