#include<stdio.h>

int main(){

int num1,num2,results;

printf("Enter 2 number : ");

scanf("%d %d", &num1,&num2);

results = num1 + num2;

printf("sum is = %d\n",results);


results = num1 - num2;
printf("Sub is = %d\n",results);

results = num1 * num2;
printf("Multiplication is = %d\n",results);


results = num1 / num2;
printf("div is = %d\n",results);

results = num1 % num2;
printf("Remainder is = %d",results);





    return 0;
}