#include <stdio.h>

int main(int argc, char *argv[]) {

    int numberOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];

    printf("Number of args %d", numberOfArgs);

    printf("\nArgument 1 is the program name: %s\n", argument1);
    printf("\nArgument 2 is the CLI argument: %s\n", argument2);

    double width;
    double height;
    double permiter;
    double area;

    printf("\nWhat is the width of your rectangle?\n");

    scanf("%lf", &width);

    printf("\nWhat is the height of your rectangle?\n");

    scanf("%lf", &height);
    
    printf("\nCalculating...\n");

    permiter = (height + width) * 2;
    area = height * width;

    printf("\nYour perimeter was %lf\n", permiter);
    printf("\nYour area was %lf\n", area);

    return 0;
}