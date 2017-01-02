#include "main.h"
#include <stdio.h>

int main(int argc, char **argv) {
  printf("hello, world!\n\n");
  printf("this is crispy-octo-guacamole ;)\n\n");

  printf("expect more features soon.\n\n");

  for (int i = 0; i < 10; i++) {
    printf("check out this loop (#%i)!11\n", i);
  }

  COUNT_TO(10);
}
