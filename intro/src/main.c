#include <stdio.h>

int main() 
{
    char name[100];

    printf("What is your name?\n");

    scanf("%99s", name);

    printf("Nice to meet you %s\n", name);
    
    return 0;
}