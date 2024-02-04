#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

static void
readsecret(void) {
  char confidential[16];

  strcpy(confidential, "do_not_tell");
  printf("top secret message is: %s\n", confidential);

  return ;
}

static void
guesswhat(void) {
  char buf[16];

  printf("do you mean ?: %s\n", buf);

  return ;
}

int
main(void) {

  readsecret();
  guesswhat();
  printf("\n");

  printf("try again\n");
  readsecret();
  sleep(5);
  guesswhat();
  return EXIT_SUCCESS;
}
