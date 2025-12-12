#include <bits/stdc++.h>
using namespace std;
int f[102][102];
vector<string> vet;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  freopen("changest.inp", "r", stdin);
  freopen("changest.out", "w", stdout);
  string X, Y;
  cin >> X >> Y;
  int a = X.size(), b = Y.size();
  for (int i = 0; i <= a; i++)
    f[i][0] = i;
  for (int i = 0; i <= b; i++)
    f[0][i] = i;
  for (int i = 1; i <= a; i++)
  {
    for (int j = 1; j <= b; j++)
    {
      if (X[i - 1] == Y[j - 1])
        f[i][j] = f[i - 1][j - 1];
      else
        f[i][j] = min({f[i - 1][j] + 1, f[i][j - 1] + 1, f[i - 1][j - 1] + 1});
    }
  }
  cout << f[a][b] << '\n';
  int i = a, j = b;
  while (i > 0 || j > 0)
  {
    if (i > 0 && j > 0 && f[i][j] == f[i - 1][j - 1] && X[i - 1] == Y[j - 1])
    {
      i--;
      j--;
    }
    else if (i > 0 && f[i][j] == f[i - 1][j] + 1)
    {
      vet.push_back("D " + to_string(i));
      i--;
    }
    else if (j > 0 && f[i][j] == f[i][j - 1] + 1)
    {
      vet.push_back("I " + to_string(i + 1) + ' ' + Y[j - 1]);
      j--;
    }
    else if (i > 0 && j > 0 && f[i][j] == f[i - 1][j - 1] + 1)
    {
      vet.push_back("R " + to_string(i) + ' ' + Y[j - 1]);
      i--;
      j--;
    }
  }
  reverse(vet.begin(), vet.end());
  for (auto s : vet)
    cout << s << '\n';
  return 0;
}