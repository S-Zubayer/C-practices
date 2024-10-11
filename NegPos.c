#include<stdio.h>

int main(){
 
  int num;

  printf("Enter Your number : ");
  
  scanf("%d", &num);

  if(num<0){
  printf("%d is a negative integer",num);
  }else{
  printf("%d is a positive integer",num);
  }


    return 0;
}


/*
 #include <stdio.h>

int main(){
    int py;
    printf("Enter a number : ");

    scanf("%d", &py);
    if(py<0){
        printf("%d is negative",py);
    }else{
        printf("%d is positive",py);
    }
    
    return 0;
}
*/