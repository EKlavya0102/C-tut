/*
#include <stdio.h>
int main(){
int arr[5];

int *p=arr;
for(int i=0; i<5; i++){
    scanf("%d", (p+i));
}
for (int i = 0; i<5; i++){
    printf("%d index: %d \n", i, arr[i]);
}
    return 0;
}
*/

// array function
/*
#include <stdio.h>
void take_input(int arr[], int n);  // declaring function by square method
void print_output(int *arr, int n);  // declaring function by pointer method

int main (){
int arr[10];
take_input(arr,3);
print_output(arr,3);
    return 0;
}

void take_input(int arr[10], int n){     // function defination by normal method
for (int i=0; i<n; i++){
    printf("Enter the input %d : ", i);
    scanf("%d", &arr[i]);
    }
}

void print_output(int *arr, int n) {      // function defination by pointer method
    for (int i = 0; i<n; i++){
    printf("%d index: %d \n", i, arr[i]);
    }
}
*/

// Multi dimensional array
// question - store marks of 3 subjects of 2 students
/*
#include <stdio.h>
void print(int mark[50][50], int r,int c);
int main (){
    int r=2,c=3;
    int mark[50][50];

    for(int i=0; i<r; i++){
        for (int j=0;j<c;j++){
            printf("Enter %d mark of %d student ", j, i);
            scanf("%d", &mark[i][j]);
        }
        printf("\n");
    }

    print(mark,r,c);


    return 0;
}

void print(int mark[50][50], int r, int c){
    for(int i=0; i<r; i++){
        printf("Mark of %d is : ",i);
        for (int j=0;j<c;j++){
            printf("%d\t",mark[i][j]);
        }
        printf("\n");
    }

}
*/

/*
// write a function to count the number of odd numbers in an array
#include <stdio.h>
void count(int arr[],int n);
int main (){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    count(arr,13);
    return 0;
}

void count(int arr[], int n){
    int count=0;
for(int i=0;i<n;i++){
    if(arr[i] % 2 !=0){   // changing here we can know even, multiple of any number ,ect
        count++;
    }
}
printf("There are %d ODD numbers in this array ! \n", count);

}

*/

/*
// reversing an array
#include <stdio.h>
int main (){
int arr[]={2564};
int i,r,p=0;
while(arr>0){
    r= arr % 10;


}
    return 0;
}
*/

// Fibonacci series of n number using loop
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
        printf("%d \t", fib[i]);
    }
    printf("\n");
    return 0;
}