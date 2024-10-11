
#include <stdio.h>

int main() {
    int var = 20;
    int *ptr = &var;
    
    printf("Value of var: %d\n", var);
    printf("Address of var: %p\n", (void*)&var);
    printf("Value of ptr: %p\n", (void*)ptr);
    printf("Value at ptr: %d\n", *ptr);
    
    return 0;
}
