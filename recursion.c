// print hello world n times through recursion 
#include <stdio.h>

void printHW(int n); // function prototype

int main()
{
    printHW(5);  //function call with argument 
    return 0;
}

// recursive function defination 
void printHW(int n)
{
    if (n == 0)   //3. if n becomes 0 return nothing means stop 
    {
        return;
    }

    printf("Hello world !! \n");  //1. print hello world 
    printHW(n - 1);  // 2. calling itself and printing hello world n-1 times as already printed 1 time above 
}

