
/*#include <stdio.h>

int main(){
int a =8;
 a >= 8 ? printf("This is great number\n") : printf("This is not great number\n") ; //ternary operator

    return 0;
}
*/

/*
//if - else and else-if
#include <stdio.h>
int main(){
int a;
printf("Enter the age: ");
scanf("%d", &a);

if (a>=13 && a <=18 ){
    printf("teenage \n");
}
else if (a >=18 && a<=26) {
    printf("Eligible to enter \n");

}
else {
    printf("No entry \n");
}
    return 0;
}
*/

/*
// using switch condition ---- nested switch allowed and order does not matter

#include <stdio.h>

int main()
{
    int day;

    printf("Enter the index (1-7): ");
    scanf("%d", &day);

    switch (day)
    {
    case 2:
        printf("Monday \n");
        break;

    case 3:
        printf("tuesday \n");
        break;
    case 1:
        printf("Sunday \n");
        break;

    default:
        printf("invalid number \n ");
    }

    return 0;
}

// program to identify uppercase and lowercase letter
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z') // each letter has its own int value called "askai value" so we can compare it
    {
        printf("UPPERCASE \n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("lowercase \n");
    }
    else {
        printf("Invalid Character \n");
    }
    return 0;
}
*/
