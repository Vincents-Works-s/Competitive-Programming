#include <iostream>
#include <algorithm> // needed for max() acc. to chatGPT

using namespace std;

int main() {
    int t, l, r, a, x, maxVal;
    cin >> t;
    for (int i = 0; i < t; i++) {
        // l = lower bound, r = upper, a = val
        cin >> l >> r >> a;
        maxVal = r / a + r % a;
        x = r / a * a - 1; // 5 9 4
        if (x >= l) {
            maxVal = max(maxVal, x / a + x % a);
        }
        cout << maxVal << endl;
    }
}
