// use library functions to calculate the square of a number given by the user

// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     int n;
//     printf("Enter the number: ");
//     scanf("%d", &n);

//     printf("%f", pow(n, 2)); // use of pow(number, power ) through math library

//     return 0;
// }

// // write function to calculate area of a square, a circle and a rectangel
// #include <stdio.h>

// // function prototype
// void asquare();
// void acircle();
// void arectangle();

// // function call
// int main()
// {
//     arectangle();
//     acircle();
//     asquare();

//     return 0;
// }

// // function defination
// void arectangle()
// {

//     long int l, b;
//     printf("Enter the length : ");
//     scanf("%ld", &l);

//     printf("Enter the bredth: ");
//     scanf(" %ld", &b);

//     printf("The are of rectangle as per given argument is %ld \n", l * b);
// }

// void acircle()
// {
//     // #define pie 3.1415;
//     const float pie = 3.1415;
//     float r;

//     printf("\n Enter the radius of Circle: ");
//     scanf("%f", &r);

//     printf("The are of circle is %.3f \n ", pie * r * r);
// }

// void asquare()
// {
//     float s;
//     printf(" \n *** area of Square *** \n");

//     printf("Enter the length: ");
//     scanf("%f", &s);

//     printf("The are of square is %.3f \n", s * s);
// }

// another method
#include <stdio.h>

float squareArea(float side);
float circle(float rad);
float rectangle( float a, float b);

int main()
{
    float area = squareArea(4);
    printf("%f \n", area);

    float area2 = circle(4);
    printf("AREA of circle is: %.3f \n", area2);

    float rec= rectangle(4,5);
    printf("The area of rectangel is : %.3f \n", rec);

    return 0;
}

float squareArea(float side)
{
    return side * side;
}

float circle(float rad)
{
    return 3.1415 * rad * rad;
}

float rectangle( float a, float b){
    return a * b;
}

