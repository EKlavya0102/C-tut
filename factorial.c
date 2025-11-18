#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int fact = 1;
    for (i = 1; i <= n; i++)
    {
        fact *= i;
    }
    printf("The factorial of %d is %d\n", n, fact);
    return 0;
}