// program to calculate are of rectangle
/*

#include <stdio.h>

int main()
{

    int a, b;
    printf("Enter the Length: ");
    scanf("%d", &a);

    printf("Enter the breadth: ");
    scanf("%d", &b);

    // c = a * b;

    printf("The area or rectangle is %d \n", a*b);
    return 0;
}
*/

// Program to Calculate area of circle taking input from the user
/*
#include <stdio.h>
#define PI 3.1415

int main()
{
    double radius, area;

    printf("Enter the Radius : ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The are of circle is : %.2f\n", area);

    return 0;
}
*/

// volume of cylinder volume= pi*r^2 * h
/*
#include <stdio.h>
#define PI 3.1415

int main()
{
//const float PI = 3.1415;
    double radius, volume, height;

    printf("Enter the radius: ");
    scanf("%f", &radius);

    printf("Enter the height : ");
    scanf("%f", &height);

    volume = PI * radius * radius * height;

    printf("The volume of cylinder is %.2f\n ", volume);

    return 0;
}
*/

// Celcius to fahrenhite
#include <stdio.h>
int main()
{
    float celcius, ferh;

    printf("Enter the celcius temp: ");
    scanf("%f", &celcius);

    ferh = (celcius * 9 / 5) + 32;

    printf("The converted temp is: %.2f\n ", ferh);

    return 0;
}
