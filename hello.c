#include<stdio.h>
#define println printf("%s \n",h);
int main (void) {
  
  int ret =0;
  ret = printf("hello world \n");
  printf ("printf() do hello world: %d \n", ret);
  printf ("by Amnom \n");
  char h[10] = {'h','e','l','l','o','w','o','r','l','d'};
  println;

  return 0;
}
