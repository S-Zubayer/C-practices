
#include <stdio.h>

int main() {
    printf("Using for loop:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    
    printf("\n\nUsing while loop:\n");
    int j = 1;
    while (j <= 10) {
        printf("%d ", j);
        j++;
    }
    
    printf("\n");
    return 0;
}
