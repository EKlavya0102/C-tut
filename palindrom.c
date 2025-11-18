#include <stdio.h>
int main()
{
    int n, s, r, p = 0;
    printf("Enter any number: ");
    scanf("%d", &n);

    s = n;
    while (n > 0)
    {
        r = n % 10;
        p = p * 10 + r;
        n = n / 10;
    }

    printf("THE REVERESE IS: %d \n", p); 

    if (s == p)
    {
        printf("PALINDROM !! \n");
    }
    else
    {
        printf("NOT PALINDROM !! \n");
    }
    return 0;
}