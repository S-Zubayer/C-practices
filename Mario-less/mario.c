#include <cs50.h>
#include <stdio.h>
int main(void)
{
    int n, row, col;
    // Prompt the user for the pyramid's height
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    for (row = 1; row <= n; row++)
    {
        // printing spaces
        for (col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        // printing hashes
        for (col = 1; col <= row; col++)
        {
            printf("#");
        }
        printf("\n");
    }
}
