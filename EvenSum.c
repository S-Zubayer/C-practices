#include <stdio.h>
/*
int main(){

    int n;
    int sum = 0;
    printf("enter your damn number : ");

    scanf("%d", &n);

    for (int i=1; i<=n; i++){
        if (i%2==0){
            sum += i;
            printf("%d ", i);
        }
    }

    printf("sum : %d\n", sum);

    return 0;
}
*/

int main(){
    
    int num;
    int sum = 0;
    printf("enter your number : ");

    scanf("%d",&num);

    for (int i=1; i<=num; i++){
        if (i%2 !=0){
            sum +=i;
            printf("%d ",i);
        }
    }
    
    printf("sum : %d\n", sum);


    return 0;

}