#include <iostream>
#include <string>
using namespace std;

int main() {
    int m, s;
    cin >> m >> s;
    
    if (s == 0) {
        if (m == 1)
            cout << "0 0" << endl;
        else
            cout << "-1 -1" << endl;
        return 0;
    }
    
    if (s > 9 * m) {
        cout << "-1 -1" << endl;
        return 0;
    }
    
    string smallest = "", largest = "";
    
    // Find the largest number
    int sum = s;
    for (int i = 0; i < m; i++) {
        if (sum >= 9) {
            largest += '9';
            sum -= 9;
        } else {
            largest += ('0' + sum);
            sum = 0;
        }
    }
    
    // Find the smallest number
    sum = s;
    for (int i = 0; i < m; i++) {
        int digit = max(0, sum - 9 * (m - i - 1));
        if (digit == 0 && i == 0) digit = 1; // Ensure the first digit isn't zero
        smallest += ('0' + digit);
        sum -= digit;
    }
    
    cout << smallest << " " << largest << endl;
    
    return 0;
}
