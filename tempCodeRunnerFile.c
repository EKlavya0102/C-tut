#include <stdio.h>
void main()
{
    int a, b;

    printf("Enter the number to be checked: ");
    scanf("%d", &a);
    b = a % 2;

    printf("%d\n", b == 0);

    if (b == 0)
    {

        printf("The number is divisibnle by 2\n");
    }
    else
    {
        printf("The number is not divisible by two\n");
    }
}
