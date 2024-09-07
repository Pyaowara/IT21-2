#include <stdio.h>
#include <stdlib.h>

int main() {
  char *str;
  char *p;
  int lc = 0;
  int uc = 0;
  int d = 0;

  str = (char *)malloc(100 * sizeof(char));
  if (str == NULL) {
    printf("Memory allocation failed!\n");
    return 1;
  }

  scanf(" %[^\n]s", str);
  p = str;

  while (*p) {
    if (*p >= 'a' && *p <= 'z')
      lc++;
    else if (*p >= 'A' && *p <= 'Z')
      uc++;
    else if (*p >= '0' && *p <= '9')
      d++;
    p++;
  }

  printf("Lowercase letters: %d\n", lc);
  printf("Uppercase letters: %d\n", uc);
  printf("Digits: %d\n", d);

  free(str);

  return 0;
}