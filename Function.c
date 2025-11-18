// #include <stdio.h>

// void printTable(int n); // function prototype/decleration
// int sum(int a, int b);

// int main()
// {
//     int a, b;
//     // int n;
//     printf("Enter the number: ");
//     scanf("%d \t %d", &a, &b);

//     // printTable(n); // here n is argument/ actual parameter
//     sum(a, b);

//     return 0;
// }

// // function definations
// void printTable(int n) // here n is parameter / formal parameter
// {
//     for (int i = 1; i <= 10; i++)
//     {
//         printf("%d \n", n * i);
//     }
// }

// int sum(int a, int b)
// {
//     printf("%d \n ", a+b);
//     return 0;
// }

// change in parameter does not change the argument value in the main function
#include <stdio.h>
void calculateprice(float value);

int main()
{
    float value = 100;
    calculateprice(value);
    printf("The value if %f\n", value);  // the value is 100 here as cahnge in paramenter didnt change the value of argument 
    return 0;
}

void calculateprice(float value)
{

    value = value + (0.18 * value);
    printf("Final price is : %.3f \n", value);
}