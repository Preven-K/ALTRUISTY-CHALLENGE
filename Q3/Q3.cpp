#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> x >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    for (int i = 0; i <= n - x; i++) {
        int temp = arr[i];
        //cout << temp;
        for (int j = 1; j < x; j++) {
            if (arr[i + j] < temp) {
                temp = arr[i + j];
            }
        }
        if (temp > min) {
            min = temp;
        }
    }
    cout << min << endl;
    return 0;
}