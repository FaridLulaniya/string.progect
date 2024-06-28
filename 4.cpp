#include <stdio.h>
#include <string.h>

int main() {
    char source[100];
    char destination[100];

    printf("Enter the source string: ");
    gets(source);

    strcpy(destination, source);

    printf("The copied string is: ");
    puts(destination);

    return 0;
}