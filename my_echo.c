#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {

  int str_size = 1;
  int i;
  for (i = 1; i < argc; ++i) {
    str_size += strlen(argv[i]) + 1;
  }

  char *mem = (char *)malloc(str_size);

  int p = 0;
  for (i = 1; i < argc; ++i) {
    int n = strlen(argv[i]) + 1;
    int j;
    for (j = 0; j < n - 1; ++j) {
      mem[p++] = argv[i][j];
    }
    mem[p++] = ' ';
  }
  mem[p++] = '\0';
  printf("%s\n", mem);

  return 0;
}
