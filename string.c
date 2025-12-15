/*
#include <stdio.h>
int main (){

// Declaring 
char s[]="Declaration 1";
char st[100];
char *stri="Hello world";  // declaring by pointer 


// Taking input 
//scanf("%s", st);       // scanf cannot be used to take multi word input with space
fgets(st, 100, stdin);
stri = "Eklavya"; 

//Output
printf("\n This is the output: \n ");
printf("%s \n", s);
puts(st);
puts(stri);

    return 0;
}
*/

// standard libraries of string in c 
#include <stdio.h>
#include<string.h>
int main (){
    // strlen() - count the number of character excluding the null 
    char name[]="Eklavya";
    int length = strlen(name);
    printf("%d \n", length);

    // strcpy(target,source) - copies the content of one varibale to another empty variable
    char Name[]="EKLAVYA";
    char s[50];
    strcpy(s,Name);

    puts(Name);
    puts(s);

    // strcat(string1,string2) - THis is used to join(concatenate)
    char hel[12]= "Name";
    char me[]="Eklavya";
    strcat(hel,me);
    puts(hel);           // after concatenation string is stored in first variable

return 0;
}


