#include <iostream>
#include <vector>
using namespace std;

const int MAXV = 100005;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a1(n), a2(m);
    for (int i = 0; i < n; i++)
      cin >> a1[i];
    for (int j = 0; j < m; j++)
      cin >> a2[j];

    vector<int> cnt(MAXV, 0); // dem tan suat cua tung phan tu
    for (int i = 0; i < n; i++) {
      cnt[a1[i]]++;
    }
    vector<int> ans;
    ans.reserve(n); // reserve la de tang toc do khi push back

    for (int j = 0; j < m; j++) {
      int k = a2[j];       // lay phan tu trong a2
      while (cnt[k] > 0) { // neu trong a1 co phan tu nay thi them vao ans
        ans.push_back(k);
        cnt[k]--; // giam tan suat
      }
    }
    for (int i = 0; i < MAXV; i++) {
      while (cnt[i] > 0) {
        ans.push_back(i);
        cnt[i]--;
      }
    }

    for (int i = 0; i < (int)ans.size(); i++) {
      cout << ans[i];
      if (i + 1 < (int)ans.size()) // de ko co dau cach thua o cuoi dong
        cout << " ";
    }
    cout << endl;
  }

  system("pause");
  return 0;
}