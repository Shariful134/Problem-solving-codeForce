#include<stdio.h>
int main()
{
    char c;
    scanf("%c", &c);  

    if(c == 'z') {
        printf("a\n"); 
    } 
   else {
        char next = c + 1;  
        printf("%c\n", next);
    }

    return 0;
}