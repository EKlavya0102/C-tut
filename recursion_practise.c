*/*
// #include <stdio.h>
int sum(int n);

int main()
{
    printf("The sum is: %d \n", sum(5));
    return 0;
}

int sum(int n)
{
    if (n == 1)
    {
        return 1;
    }

    int sumNm1 = sum(n - 1); // sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}
*/


/*
//factorial of n number
#include<stdio.h>
int fact(int n);

int main (){

    printf("The factorial is : %d \n",fact(4));
    return 0; }

int fact(int n){
    if(n == 1){
        return 1;
    }

    int f1= fact(n-1);
    int f2= f1 * n;
    return f2;

}
*/


// fibonacii series
#include <stdio.h>

int fib(int n);

int main()
{
    printf("The series is %d \n ", fib(5));
    return 0;
}

int fib(int n)
{

    if (n == 0 || n == 1)
    {
        if (n == 0)
        {
            return 0;
        }
        if (n == 1)
        {
            return 1;
        }
    }

    int fibn1 = fib(n - 1);
    int fibn2 = fib(n-2);
    int fibN = fibn1+fibn2;
    return fibN;
}