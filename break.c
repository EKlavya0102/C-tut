// #include <stdio.h>

// int main()
// {
//     for (int i = 1; i <= 5; i++)
//     {
//         if (i == 3)
//         {
//             break;
//         }
//         printf("%d\n", i);
//     }

//     return 0;
// }

// keep taking input from user until user takes odd number
// #include <stdio.h>
// int main()
// {

//     int a;
//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d", &a);

//     } while (a % 2 == 0);
//     printf("The odd number is %d \n", a);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int inp;
    do
    {
        printf("Enter the number: ");
        scanf("%d", &inp);

        if (inp % 2 != 0)
        {
            break;
        }

    } while (1);

    printf("Odd number!\n");
    return 0;
}

// keep taking input from the user until the user enters the input as multiple of 7
// #include <stdio.h>
// int main()
// {
//     int n;
//     do
//     {
//         printf("Enter the number: ");
//         scanf("%d", &n);
//         // if (n % 7 == 0)
//         // {
//         //     break;
//         // }
//     }
//     // while (1);
//     while (n % 7 != 0);

//     return 0;
// }
