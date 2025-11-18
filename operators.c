// Apna collge - its sunday and its snowing ---- True (1)
/*
#include <stdio.h>

int main()
{
    char a, b;
    printf("Enter the first character of Day: ");
    scanf("%c", &a);

    printf("Is it snowing (Y/N): ");
    scanf(" %c", &b);

    printf("%d\n", a == 's' && b == 'Y');
    return 0;
}
*/

// Its monday or its raining ---- True (1)
/*
#include <stdio.h>

int main()
{
    char a, b;
    int c;

    printf("Enter the day ( first letter of day): ");
    scanf("%c", &a);

    printf("Is it raining or sunny (R/S)?: ");
    scanf(" %c", &b); // added space before %c

    c = a == 'M' || b == 'R';
    if (c == 0)
    {
        printf("The statement is false\n");
    }
    else
    {
        printf("The statement is true\n");
    }
    return 0;
}
*/

// IF a number is greater 9 and small then 100 ------ true(1)
//  #include <stdio.h>

// void main(){
// int a,b;

// printf("Enter the number : ");
// scanf("%d", &a);

// b = a > 9 && a < 100 ;

// printf("%d\n", b);
// }

// program to check if the given character is a digit .
/*
#include <stdio.h>
#include <ctype.h>

int main(){
char ch; // variable decleration
printf("Enter the character: "); // taking input
scanf("%c", &ch);

if (isdigit(ch)){
    printf("This is a digit !!\n");
}
else {
    printf("This is not a digit !!\n");
}
    return 0;
}

*/

// Armstrong number

// #include <stdio.h>
// // #include <math.h>

// int main()
// {

//     int num, originalnum, result, n1, n2, n3;

//     printf("Enter the 3 digit number: ");
//     scanf("%d", &num);

//     // originalnum = num;

//     // extraction of each number to cube them and sum them
//     n1 = num % 10;
//     n2 = (num / 10) % 10;
//     n3 = (num / 10) % 100;

//     result = pow(n1, 3) + pow(n2, 3) + pow(n3, 3); // calculating the cube of individual number and summing them

//     if (result == num)
//     {
//         printf("ARMSTRONG");
//     }
//     else
//     {
//         printf("NOT Armstrong");
//     }

//     return 0;
// }

