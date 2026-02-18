#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int taxis = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 1) {
            one += 1;
        }
        else if (arr[i] == 2) {
            two += 1;
        } 
        else if (arr[i] == 3) {
            three += 1;
        }
        else if (arr[i] == 4) {
            four += 1;
        }
    }

    taxis += four;
    taxis += three;
    one -= min(one, three);

    taxis += two / 2;
    if (two % 2 == 1) {
        taxis += 1;
        one -= min(2, one);
    }

    if (one > 0) {
        taxis += (one + 3) / 4;
    }



    cout << taxis << endl;
    return 0;
}
