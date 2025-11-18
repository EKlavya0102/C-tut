//Taking input / initializing pointer  
// #include <stdio.h>
// // float GST(a);
// int main()
// {
//     float a[3]; //allocating size of pointer 
   
//     for (int i = 0; i < 3; i++)  //taking 3 input 
//     {   printf("Enter the price: ");
//         scanf("%f", &a[i]);  // input by mpercentile sign 
//     }
    
//     for (int i = 0; i < 3; i++)
//     {printf("The price with Gst is: %.2f\n", a[i]+(0.18*a[i]));        //output by just mentioning the array name 
        
//     }
//     printf("\n");
//     return 0;
// }


//Pointer aarithmetic
/*
#include <stdio.h>
int main(){
int age=20;
int _age= 21;
int *ptr= &age;
int *_ptr=&_age;

printf("The difference %u and % u is  %td \n",ptr,_ptr,  ptr-_ptr);  //to differenciate pointer the pointer should be of same type 

_ptr=&age;

printf("Comparision = %u\n", ptr == _ptr);

    return 0;
}
*/

/*
Question : Why pointer arthemetic ? - because array is a pointer (its first index)
int *ptr= &a[0]; 
    or                  // these two are same and will point at the zeroth index of the array 
int *ptr = arr; 

Accessing the array 
     if ptr points to index 0 then ptr++ will point to index 1 
example :
*/

/*
#include <stdio.h>
int main(){
int number[10]; // allocated memory for 10 numbers 

//input 
int *ptr= &number[0]; // pointer pointing to zeroth postion of the aray 

for(int i=0;i<10;i++){
    printf("%d index : ",i);
    //scanf("%d", &number[i]); // taking input without using poninter and using the mpercentile sign , here the pointer made on line 53 will ger disableld 
    scanf("%d", (ptr+i));  // taking value by using ptr++ logic 

}

//Output
for (int i=0;i<10;i++){
//printf("%d index value: %d \n", i, number[i]); // printing value directly 
printf("%d index value: %d \n", i, *(ptr+i)); // printing by using the deferrencing sign *
}
    return 0;
}
*/


//                             array as function argument 
/*
#include <stdio.h>

//unction declaration 
void printnumber(int arr[],int n); //here array does not have size because it can have size of any and n is there to define that 
//           or
//void printnumber(int *arr, int n); // this is by pointer method

// function call 
int main(){
 int arr[]={1,2,3,4,5,6};

 printnumber(arr,6);  // function call , first name of array and then the size of array 
    
    return 0;
}

// function defination 
void printnumber(int arr[], int n) // void printnumber(int *arr, int n) both will work same 
 { for (int i=0; i<n;i++){
    printf("%d \t", arr[i]);
 }
 printf("\n");
}
*/


//                             MULTIDIMENSIONAL ARRAY

// 2D arrays 
/*
int arr[][]= { {1,2,3}, {4,5,6} };  // declare

can visualize in form of matrix i.e 
                                1 2 3
                                4 5 6 
but this will be stored in the memory like 1 2 3 | 4 5 6 

We can access this by :
arr[0][0]
arr[0][1]
arr[0][2]
arr[1][0]
arr[1][1]
arr[1][2]    as accessing the value of 2X2 matrix 

example below :
*/

//question - store marks of 3 subjects of 2 students 
/*
#include <stdio.h>
int main (){
    //2x3
    int marks[2][3];  // _ _ _ | _ _ _

    marks [0][0]=90;
    marks [0][1]=80;
    marks [0][2]=98;

    marks [1][0]=83;
    marks [1][1]=66;
    marks [1][2]=78;

    //accessing value:

    printf("%d \n", marks[1][0]);

    return 0;
}
*/

// by using loop 
/*
#include <stdio.h>
int main (){
int mark[100][100]; // allocating the size of row and coloum 
int r=2 ; // two student 
int c= 3 ;// three marks each

// taking input 
for (int i=0;i<r;i++){
    printf("Enter mark of %d student: \n",i);
    for (int j=0;j<c;j++){
        printf("enter mark of %d subject : ",j);
        scanf("%d", &mark[i][j]);
    }
    printf("\n");
}

// output 
for(int i=0;i<r;i++){
    printf("Mark of %d student is: ",i);
    for(int j=0;j<c;j++){
        printf("%d\t", mark[i][j]);
    }
    printf("\n");
}

return 0;
}
*/


//*(arr+5)
#include <stdio.h>
int main(){
int arr[]={1,2,3,4,5};
int *p=arr;
printf("%d \n", *(p+5));
printf("%d \n", *(p+2));
    return 0;
}