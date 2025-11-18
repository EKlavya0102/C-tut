/*
#include <stdio.h>

int main()
{
    int i,j;

    printf("Enter the number; ");
    scanf("%d",&j);

    for (i = 1; i <= 10; i+=1)
    {
        printf("%d\n", j*i);
    }
    return 0;
}
*/

/*
#include <stdio.h>
int main(){

int i, j,k; // i loop inisialization, j = user input for multiplication number, k for limit

printf("Enter the multiplication number: ");
scanf("%d", &j);

printf("Enter the limit: ");
scanf("%d",&k);

for ( i=1; i<=k; i+=1){
    printf("%d x %d = %d \n", j,i,i*j);
}
    return 0;
}
*/

/*
// while loop

#include <stdio.h>

int main()
{
    int j, k;

    printf("Enter the number: ");
    scanf("%d", &j);
    printf("Enter the limit: ");
    scanf("%d", &k);

    int i = 1; //initialization
    while (i <= k)
    {
        printf("%d X %d = %d \n", j, i, j * i);
        i++ ; //updation
    }

    return 0;
}
*/

/*
// print A to Z
#include <stdio.h>
int main()
{
    char i = 'A';
    while (i <= 'Z')
    {
        printf("%c\n", i);
        i++;
    }
    return 0;
}

*/

/*
#include <stdio.h>
int main()
{
    printf("This is for loop to print a to z");

    for (char i = 'a'; i <= 'z'; i++)
    {
        printf("%c \n", i);
    }

    return 0;
}
    */

//do while loop 
#include <stdio.h>

int main(){
int i=1;
do {
    printf("%d\n",i);
    i++;
}
while(i<=5);

return 0;
}
