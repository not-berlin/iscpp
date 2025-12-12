#include <bits/stdc++.h>
using namespace std;
const int N = 1000;
const int M = (int)1e9;
int dp[N + 3][N + 3], a[N + 3][N + 3];
int x[N + 3];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    freopen("garbage.inp", "r", stdin);
    freopen("garbage.out", "w", stdout);
    int m, n;
    cin >> m >> n;
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> a[i][j];
    }
    for (int i = 0; i <= m; i++)
        dp[i][0] = dp[i][n + 1] = -M;

    for (int i = 1; i <= n; i++)
        dp[1][i] = a[1][i];

    for (int i = 2; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            dp[i][j] = max(dp[i - 1][j - 1], max(dp[i - 1][j], dp[i - 1][j + 1])) + a[i][j];
        }
    }
    int j = 0;
    for (int i = 1; i <= n; i++)
        if (dp[m][j] < dp[m][i])
            j = i;
    cout << dp[m][j] << "\n";

    for (int i = m; i > 0; i--)
    {
        x[i] = j;
        if (dp[i][j] == dp[i - 1][j - 1] + a[i][j])
            j--;
        else if (dp[i][j] == dp[i - 1][j + 1] + a[i][j])
            j++;
    }

    for (int i = 1; i <= m; i++)
        cout << x[i] << '\n';
    return 0;
}