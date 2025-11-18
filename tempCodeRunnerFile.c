#include <stdio.h>
#include <math.h>

int main (){
    int i,n, isprime =1;

    printf("Enter the number : ");
    scanf("%d", &n);

    if ( n<=1){
        printf("NOT PRIME NUMBER \n");
        return 0;
    }

    for (i=2;i<=sqrt(n);i++){
        if(n%i==0){
            isprime= 0;
            break;
        }
    }
    if(isprime){
        printf("PRIME NUMBER !! \n");
    }
    else{
        printf("NOT PRIME NUMBER !! \n");
    }
    return 0;
}

