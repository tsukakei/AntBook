#include <cstdio>
#include <string.h>
#include <algorithm>

using namespace std;

const int MAX_N = 100;

int n, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N + 1][MAX_N + 1];

int rec(int i, int j);
int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &w[i], &v[i]);
  }
  scanf("%d", &W);

  memset(dp, -1, sizeof(dp));
  printf("%d\n", rec(0, W));
}

int rec(int i, int j) {
  if (dp[i][j] >= 0) {
    return dp[i][j];
  }

  int res;
  if (i == n) {
    res = 0;
  } else if (j < w[i]) {
    res = rec(i + 1, j);
  } else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }

  return dp[i][j] = res;
}
