#include <stdio.h>

int main(){
  int n;
  int i;
  int flag = 1;
  printf("The number to check :\n ");
  scanf("%d",&n);
  for (i = 2 ;i < n; i++ ){
    if (n%i== 0){
      flag = 0;
      break;
    }
  }   
  if (flag == 0){
    printf("The number is not prime.\n");
  }else if(flag == 1){
    printf("The Number is Prime.");
  }

}
