#include <stdio.h>
void main()
{
    int a = 4;
    int b = 8.5; // it will not throw an error but not recommended.

    float a1 = 8.5; // -> right way
    char ch = 'D';
    printf("Value of b = %d\n", b); // Prints 8 and not 8.5
    printf("Value of a1 = %f\n", a1);
    printf("Character =  %c\n", ch);
    printf("ASCII value of %c = %d\n", ch, (int)ch);
    printf("Value of a+a1 = %f", a + a1);
}