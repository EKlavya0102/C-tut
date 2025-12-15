// print hello world n times through recursion 
#include <stdio.h>
void printHW(int n);   // function prototype

//calling function
int main()
{
    printHW(5);  
    return 0;
}

//defining function 
void printHW(int n)
{
    if (n == 0)    
    {
        return;
    }

    printf("Hello world !! \n");  
    printHW(n - 1); 
}

