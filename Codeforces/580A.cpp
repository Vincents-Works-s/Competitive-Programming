#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n;
    int count = 0, maxCount = 0, prev = 0;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a >= prev) {
            count++;
            if (count > maxCount) {
                maxCount = count;
            }
        } else {
            count = 1;
        }
        prev = a;
    }
    cout << maxCount << endl;
}
