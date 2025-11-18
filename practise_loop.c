// apna college practise 1 , print 0 to n number taking input from the user
/*
#include <stdio.h>

int main()
{
    int i, j;
    printf("Enter limit : ");
    scanf("%d", &j);

    for (i = 0; i <= j; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}
*/

/*
// using while loop
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the limit: ");
    scanf("%d", &n);

    int i = 0;
    while (i <= n)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
*/

/*
// print sum of first n number taking from the user and reversing the number
#include <stdio.h>
int main()
{

    int n, i;
    printf("Enter the number: ");
    scanf("%d", &n);

    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("The sum of first %d number is %d\n", n, sum);

    for(int i=n;i>=1;i--){
        printf("%d",i);
    }
    printf("\n");

    return 0;
}

*/

/*
// same using while loop
#include <stdio.h>
int main()
{
    int sum, n;
    printf("Enter the number: ");
    scanf("%d", &n);

    sum = 0;
    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("The sum of %d is %d\n", n, sum);

    //reverse of number
    int k = n;
    while (k >= 1)
    {
        printf("%d", k);
        k--;
    }
    printf("\n");
    return 0;
}
    */

// Calculate the sum of all numbers between 5 and 50 including 5 and 50
// #include <stdio.h>
// int main()
// {
//     int i;
//     long int sum = 0;
//     for (i = 5; i <= 50; i++)
//     {
//         sum += i;
//     }
//     printf("The sum of number form 5 to 50 is : %ld \n", sum);
//     return 0;
// }

#include <stdio.h>
int main()
{
    long int s1, s2;
    printf("Enter the starting number : ");
    scanf("%ld", &s1);

    printf("Enter the Ending number: ");
    scanf(" %ld", &s2);

    long int i = s1, sum = 0;
    while (i <= s2)
    {
        sum += i;
        i++;
    }

    printf("the sum of number is %ld \n", sum);

    // taking the reverse of number included in sum
    // long int rev_num = sum;   // if we have to compare this or we have to state whether the number is palindrom or not 
    int r, p = 0;
    while (sum > 0)
    {
        r = sum % 10;
        p = p * 10 + r;
        sum = sum / 10;
    }

    printf("The reverse of number is : %d \n", p);

    return 0;
}
