#include <stdio.h>

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    if (number%2 == 0) {
        printf("%d is an EVEN number.",number);
    }
    else {
        printf("%d is an ODD number.",number);
    }
    return 0;
}
