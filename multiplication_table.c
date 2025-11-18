// reverse of multiplication table

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Enter the limit: ");
    scanf("%d", &j);

    for (i = j; i >= 1; i--)
    {
        printf("%d X %d = %d \n", n, i, i * n);
    }

    printf("\n");
    
    for (i = 1; i <= j; i++)
    {
        printf("%d x %d = %d \n", n, i, n * i);
    }

    return 0;
}
