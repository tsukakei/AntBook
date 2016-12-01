#include <cstdio>

int fact(int n);

int main() {
  int n;
  scanf("%d", &n);
  printf("%d", fact(n));
}

int fact(int n) {
  if (n <= 0) return 1;
  return n * (n - 1);
}
