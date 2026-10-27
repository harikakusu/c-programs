#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int s;

    printf("Enter a string: ");
    scanf("%s", name);

    s = strlen(name);

    printf("Length of the string = %d", s);

    return 0;
}