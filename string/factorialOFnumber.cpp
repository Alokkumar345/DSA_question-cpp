#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    vector<int> ans(1, 1);
    int N = 8;
    while (N > 1) {
        int carry = 0;
        for (int i = 0; i < ans.size(); i++) {
            int result = ans[i] * N + carry;
            ans[i] = result % 10;
            carry = result / 10;
        }
        while (carry > 0) {
            ans.push_back(carry % 10);
            carry /= 10;
        }
        N--;
    }
    reverse(ans.begin(), ans.end());
    for (int digit : ans) {
        cout << digit;
    }
    return 0;
}