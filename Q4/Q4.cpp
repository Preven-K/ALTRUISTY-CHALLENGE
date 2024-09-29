#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int count[52] = {0};
    for (int i = 0; i < n; i++){
        char c;
        cin >> c;
        if (c >= 'a' && c <= 'z')
            count[c - 'a']++;
        else
            count[c - 'A' + 26]++;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] % 2 != 0) {
            cout << (char)(i + 'a') << endl;
            return 0;
        }
        if (count[i + 26] % 2 != 0) {
            cout << (char)(i + 'A') << endl;
            return 0;
        }
    }
    cout << "All are even" << endl;
    return 0;
}