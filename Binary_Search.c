#include<stdio.h>

void binarysearch(int arr[], int high, int low, int element){
  int mid;
  mid = (high + low)/2;
  if(arr[mid]==element){
    printf("The number %d found at %d index" , element , mid);
  }
  else{
    if (element < arr[mid]){
      binarysearch(arr, mid-1, low, element);
    }
    else{
      binarysearch(arr, high, mid + 1, element);
    }
  }
}

int main(){
  int arr[10] = {1,5,9,15,20,48,66,75,89,99};
  binarysearch(arr,9,0,99);
}
