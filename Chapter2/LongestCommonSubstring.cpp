#include <cstdio>
#include <algorithm>

using namespace std;

const int MAX_N = 1000;
const int MAX_M = 1000;

int n, m;
char s[MAX_N], t[MAX_M];

int dp[MAX_N + 1][MAX_M + 1];

int main() {
  scanf("%d", &n);
  scanf("%d", &m);
  scanf("%s", s);
  scanf("%s", t);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (s[i] == t[j]) {
        dp[i + 1][j + 1] = dp[i][j] + 1;
      } else {
        dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
      }
    }
  }

  printf("%d\n", dp[n][m]);
}
