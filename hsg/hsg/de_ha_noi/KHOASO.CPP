#include <bits/stdc++.h>
using namespace std;
int k[5] = {2, 0, 2, 5};
int a[5];

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  freopen("KHOASO.inp", "r", stdin);
  freopen("KHOASO.out", "w", stdout);
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  int ans = 0;
  for (int i = 0; i < 4; i++) ans += min(abs(k[i] - a[i]), 10 - abs(k[i] - a[i]));
  // có hai cách mở lần lượt là xoay sang trái và xoay sang phải
  // điều này là linh hoạt nên có thể xoay sang trái sẽ sang một "vòng mới", xoay sang phải cũng vậy
  // và vậy nên có hai khoảng cách, một, nó chính là "khoảng cách trong vòng này" tức là việc xoay từ số này sang số kia nằm trong khoảng này
  // hai là "khoảng cách từ vòng này bay qua vòng khác" giống như việc xoay 0 ngược chiều kim đồng hồ ra 9 và ngược lại
  // vậy nên để thể hiện điều đó, ta có hàm gtnn(|số hiện tại - số cần vặn tới|, một vòng số(10) - |số hiện tại - số cần vặn tới|)
  // cộng lại là ra số cách ít nhất
  cout << ans;
  return 0;
}