#include <iostream>
#include <vector>
using namespace std;

int findPeak(vector<int>& A, int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (A[mid] < A[mid + 1]) {
            left = mid + 1;      // đỉnh nằm bên phải
        } else {
            right = mid;         // đỉnh nằm tại mid hoặc bên trái
        }
    }
    return A[left];              // left == right, chính là vị trí đỉnh
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> A(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        cout << findPeak(A, n) << "\n";
    }
    return 0;
}