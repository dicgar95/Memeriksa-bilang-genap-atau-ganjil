#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  printf("masukan bilangan :");
  scanf("%d",&x );
  if (x%2==0) {
    /* code */printf("%d adalah bilangan genap\n\n",x );
  } else {
    /* code */printf("%d adalah bilangan ganjil\n\n",x );
  }
  return 0;
}
