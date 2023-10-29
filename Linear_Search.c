#include<stdio.h>

void linearsearch(int arr[], int a, int n){
  int found = 0;
  for (int i = 0; i < n; i++){
    if (arr[i] == a){
      printf("Element found at index %d\n", i);
      found = 1;
    }
  }
  if (found == 0){
    printf("Element not found in the array");
  }
}

int main(){
  int arr[5] = {5,6,7,8,9};
  linearsearch(arr,11,5);
}
