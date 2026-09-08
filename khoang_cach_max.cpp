#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int n;
    cin >> n;

    vector<int> A(n);

    for (int i = 0; i < n; i++) {
      cin >> A[i];
    }

    vector<int> st;

    // Tạo stack các vị trí tiềm năng của i
    for (int i = 0; i < n; i++) {
      if (st.empty() || A[i] < A[st.back()]) {
        st.push_back(i);
      }
    }

    int ans = 0;

    // Duyệt j từ phải sang trái
    for (int j = n - 1; j >= 0; j--) {

      while (!st.empty() && A[st.back()] <= A[j]) {
        ans = max(ans, j - st.back());
        st.pop_back();
      }
    }

    cout << ans << '\n';
  }
  system("pause");
  return 0;
}