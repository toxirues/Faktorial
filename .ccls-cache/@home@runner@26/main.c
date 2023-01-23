#include <stdio.h>

int f_factorial(int n){
  
  int i, f = 1;
  
  if (n < 0)
    return -1;
    
  else
    for (i = 1;i <= n; i++ )
      f = f*i;
  return f;
}

int main() {
  
 int n, Ft;

 printf ("Zadej celé číslo:\n");
 scanf("%d", &n);

 Ft = f_factorial(n);
 printf("Faktoriál čísla %d je %d", n, Ft);

  return 0;
}