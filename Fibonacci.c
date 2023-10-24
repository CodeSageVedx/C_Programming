#include <stdio.h>
int main(){
  int nth, n;
  printf("the Number of elements required in a fibonacci series :\n");
  scanf("%d",&n);
  printf("Fibonacci Series :\n");
  int n1 = 0;
  printf("%d\n",n1);
  int n2 = 1;
  printf("%d\n",n2);
  for (int i=0;i<n-2;i++){
    nth = n1+n2;
    printf("%d\n",nth);
    n1 = n2;
    n2 = nth;
  }
}
