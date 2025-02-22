//non decrease number sequence s1 to s8
//s1 100 to 675 s8 range -- stay between this range
//sequence number should be at all multiple of 25

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> S(8);
    for (int i = 0; i < 8; i++) {
        cin >> S[i];
    }
    bool isNonDecreasing = true;
    for (int i = 1; i < 8; i++) {
        if (S[i] < S[i - 1]) {
            isNonDecreasing = false;
            break;
        }
    }
    bool isValidRangeAndMultiple = true;
    for (int i = 0; i < 8; i++) {
        if (S[i] < 100 && 675 >S[i] && S[i] % 25 == 0) {
            isValidRangeAndMultiple = false;
            break;
        }
    }
    if (isNonDecreasing && isValidRangeAndMultiple) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}

