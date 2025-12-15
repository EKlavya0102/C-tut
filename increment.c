#include <stdio.h>
int main(){

    // post increment i++
    for(int i=1; i<=5; i++){
        printf("%d", i);
    }
    printf("\n");

    //post decrement i--
    for(int i=5; i>=1; i--){
        printf("%d", i);
    }

    printf("\n");

    // pre increment ++i
    int i=1;
    while(i<=5){
        printf("%d", ++i);
    }

    printf("\n");

    // //pre decrement --i
    // int i=5;
    // while(i>1){
    //     printf("%d", --i);
    // }



    return 0;
}

