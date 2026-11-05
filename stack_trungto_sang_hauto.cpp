#include <bits/stdc++.h>
using namespace std;

int prec(char c) {
  if (c == '^') // <-- SỬA 1: Xóa dấu cách thừa trong '^'
    return 3;
  if (c == '*' || c == '/' || c == '%')
    return 2;
  if (c == '+' || c == '-')
    return 1;
  return 0;
}

string Inftopost(string s) {
  stack<char> st;
  string res = "";

  for (char c : s) {
    if (c == ' ') // <-- SỬA 2: Đổi nháy kép " " thành nháy đơn ' '
      continue;
    else if (isalnum(c))
      res += c;
    else if (c == '(')
      st.push('('); // <-- SỬA 3: Truyền '(' vào hàm push
    else if (c == ')') {
      while (!st.empty() && st.top() != '(') {
        res += st.top();
        st.pop();
      }
      if (!st.empty())
        st.pop();
    } else {
      // <-- SỬA 4: Thêm () vào sau st.top
      while (!st.empty() && prec(st.top()) >= prec(c) && c != '^') {
        res += st.top();
        st.pop();
      }
      st.push(c);
    }
  } // <-- Kết thúc vòng lặp for ở đây

  // <-- SỬA 5: Thêm vòng lặp lấy nốt các toán tử còn sót trong Stack
  while (!st.empty()) {
    res += st.top();
    st.pop();
  }

  return res; // <-- SỬA 6: Đặt return ở NGOÀI vòng lặp for
}

int main() {
  string s;
  getline(cin, s);
  cout << "Trung to : " << s << endl;
  cout << "Hau to   : " << Inftopost(s) << endl;
  system("pause");
  return 0;
}