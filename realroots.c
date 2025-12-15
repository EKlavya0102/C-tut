#include<stdio.h>
#include<math.h>
int main (){
    float a, b, c, D, root1, root2;
    printf("Enter the coefficient a:\t");
    scanf("%f",&a);
    printf("Enter the coefficient b:\t");
    scanf("%f",&b);
    printf("Enter the coefficient c:\t");
    scanf("%f",&c);
    D= b*b-4*a*c;
    if (D>0){
        root1= (-b+ sqrt(D))/ (2*a);
        root2= (-b- sqrt(D))/ (2*a);
        printf("\nRoots are real and different.\n");
        printf("Root1= %.2f\n",root1);
        printf("Root2= %.2f",root2);
    }
    else if (D==0){
        root1= -b/(2*a);
        printf("Roots are real and equal\n");
        printf("Root1= %.2f",root1);
    }
    else{
        printf("Roots are complex.\n");
        printf("Real Part: %.2f\n", -b/(2*a));
        printf("Imaginary Part: %.2f\n",sqrt(-D)/(2*a));
    }
    return 0;
}