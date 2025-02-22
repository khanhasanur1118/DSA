#include <bits/stdc++.h>
using namespace std;

bool hasDuplicate(const vector<int>& arr) {
    int max_val = *max_element(arr.begin(), arr.end());
    vector<int> freq(max_val + 1, 0);
    for (int num : arr) {
        freq[num]++;
        if (freq[num] > 1) {
            return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 2};
    if (hasDuplicate(arr)) {
        cout << "Duplicates found." << endl;
    } else {
        cout << "All elements are distinct." << endl;
    }
    return 0;
}
