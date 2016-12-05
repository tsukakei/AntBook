#include <cstdio>
#include <algorithm>

using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

int main() {
  int C[6];
  int A;

  scanf("%d %d %d %d %d %d", &C[0], &C[1], &C[2], &C[3], &C[4], &C[5]);
  scanf("%d", &A);

  int ans = 0;
  for (int i = 5; 0 <= i; i--) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];
    ans += t;
  }

  printf("%d\n", ans);
}
