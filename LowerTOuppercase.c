/*
#include <stdio.h>


int main(){

  char letter;
  printf("enter any lowcase character : ");


  scanf("%c", &letter);

  printf("The uppercase number is : %c", letter-32);




    return 0;
}
*/

/*
#include<stdio.h>


int main(){

 char upper;
 printf("Enter any uppercase character : ");

 scanf("%c",&upper);

 printf("the lowercase character is : %c", upper+32);



    return 0;
}

*/

#include<stdio.h>
#include<ctype.h> 

int main(){
 char ower,huwer;

 printf("Enter any character : ");
scanf("%c",&ower,&huwer);

printf("Uppercase letter is %c",toupper(ower));

    return 0;
}