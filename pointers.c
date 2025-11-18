// #include <stdio.h>

// int main()
// {

//     int age = 22;
//     int *ptr = &age;

//     // printing the address
//     //  printf("%p\n", &age);
//     printf("%u\n", &age);

//     // printf("%p\n", ptr );
//     printf("%u\n", ptr);

//     // printing the value
//     printf("%d \n", age);
//     printf("%d\n", *ptr);
//     printf("%d\n", *(&age));
//     return 0;
// }

// output guess
#include <stdio.h>

int main()
{
    int *ptr, x;

    ptr = &x;
    *ptr = 0;

    printf(" x= %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    *ptr += 5;
    printf(" x= %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    (*ptr)++;
    printf(" x= %d \n", x);
    printf(" *ptr = %d \n", *ptr);

    int **pptr = &ptr;
    printf("%u\n", &pptr);
    return 0;
}

// call by value and call by function

// #include <stdio.h>
// void square(int n);

// int main()
// {
//     int number = 4;
//     _square(&number);
//     printf("number is %d \n", number);
//     return 0;
// }

// //this is call by value of argumnet where copy of value is passed 
// void square(int n)
// {
//     n = n * n;
//     printf("Square = %d \n", n);
// }

// //this is call by reference where address of variable is passed as argument 
// void _square(int *n)
// {
//     *n = (*n) * (*n);
//     printf("Square is %d\n", *n);
// }