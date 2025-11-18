// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact *= i;
//     }
//     printf("The factorial is %d \n", fact);
//     return 0;
// }

// prime number
#include <stdio.h>
#include <math.h>

int main()
{
    int i, n, isprime = 1; // isprime kept as true or false '0' false and '1' true

    printf("Enter the number : ");
    scanf("%d", &n);

    if (n <= 1)
    {
        printf("NOT PRIME NUMBER \n");
        return 0;
    }

    
    for (i = 2; i <= sqrt(n); i++)  
    {
        if (n % i == 0)   //if the given number is divisible by any and reminder is 0 the '1' becomes '0'
        {
            isprime = 0;    
            break;
        }
    }

    // gives output according to the isprime value 
    if (isprime)  
    {
        printf("PRIME NUMBER !! \n");
    }
    else
    {
        printf("NOT PRIME NUMBER !! \n");
    }
    return 0;
}