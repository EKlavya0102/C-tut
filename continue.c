// #include <stdio.h>
// int main (){
// int i;
// for (i=1;i<=10;i++){
//     if(i==6){
//         continue; //skip 6
//     }
//     printf("%d", i);
// }
//     return 0;
// }

//print only odd number between 5 to 50 ;
// #include <stdio.h>
// int main(){
// int i;
// for(i=5;i<=50;++i){
//     if(i%2==0){
//         continue;
//     }
//     printf("The odd numbers are: %d \n", i);
    
// }
//     return 0;
// }

#include<stdio.h>
int main(){
for( int i=5;i<=50; i++){
    if( i % 2 !=0){
        printf("%d\n",i);
    }
}
    return 0;
}
