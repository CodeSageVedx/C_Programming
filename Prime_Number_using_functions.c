#include <stdio.h>
void prime(n){
  int flag =1;
  for (int i=2;i<n;i++){
    if (n%i==0){
      flag = 0;
      break;
    }
  }
  if (flag==0){
    printf("The Number %d is not a prime number",n);
  }else{
    printf("The Number %d is a prime number",n);
  }
}

int main(){
  int n;
  printf("The number you want to check : \n");
  scanf("%d",&n);
  prime(n);
}
