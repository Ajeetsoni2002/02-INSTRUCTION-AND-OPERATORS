#include <stdio.h>
int main()
{
        int a = 4;
        int b = 8;

        printf("the value of a+b is: %d");

        printf("The value of a + b is: %d\n", a + b);
        printf("The value of a - b is: %d\n", a - b);
        printf("The value of a * b is: %d\n", a * b);
        printf("The value of a / b is: %d\n", a / b);
        printf("the value of a - b is: %d\n", a - b);
        // int b=a+5;
        // int a=6;
        // this is illegal

        printf("division of a/b  %d\n", 5 % 2);

        printf("5 when divided by 2 leaves a remainder of %d\n", 5 % 2);
        printf("-5 when divided by 2 leaves a remainder of %d\n", -5 % 2);
        printf("5 when divided by -2 leaves a remainder of %d\n", 5 % -2);

        printf("The value of 4 to the power 5 is %f\n", pow(2, 5));

        printf("The value of 6 + 5 is %d\n", 6 + 5);
        printf("The value of 6 + 5.6 is %f\n", 6 + 5.6);
        printf("The value of 6.1 + 5.6 is %f\n", 6.1 + 5.6);
        printf("The value of 5/2 is %d\n", 5 / 2);
        printf("The value of 3.0/9 is %f\n", 3.0 / 9);
        return 0;
}
