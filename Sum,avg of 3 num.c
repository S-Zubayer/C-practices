#include <stdio.h>

int main(){


int num,num1,num2,sum;
float avg;

printf("Enter 3 number : ");
scanf("%d %d %d",&num,&num1,&num2);

sum = num + num1 + num2 ;

avg = (float) sum/3;

printf("The sum is =  %d\n",sum);
printf("The Average is = %f",avg);

    return 0;
}