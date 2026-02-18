#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main() {
    int t;
    cin >> t;
    int result[t];
    
    for (int i = 0; i < t; i++) {
        int n, s, x;
        cin >> n >> s >> x;
        int sum = 0;
        
        int arr[n];
        for (int j = 0; j < n; j++) {
            cin >> arr[j];
            sum += arr[j];
        }

        while (sum < s) {
            sum += x;
        }

        if (sum == s) {
            result[i] = 1;
        } else {
            result[i] = 0;
        }
    }

    for (int i = 0; i < t; i++) {
        if (result[i] == 1) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
