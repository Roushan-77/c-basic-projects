#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    float a, b;
    char c;
    printf("enter the 1st no.(a) :  \n");
    scanf("%f", &a);
    printf("enter the 2st no.(b) :  \n");
    scanf("%f", &b);
    printf("enter the operator(+ , - , *, /):  \n");
    scanf(" %c", &c);

    if (c != '+' &&  c != '-' && c != '*' && c != '/')
    {
        printf("syntax error \nplease enter the operator from these(+ , - , *, /) \n");
    }
    else if (c =='+')
    {
        printf("%.2f %c %.2f = %.2f  \n", a, c, b, a + b);
    }
    else if (c == '-')
    {
        printf("%.2f %c %.2f = %.2f  \n", a, c, b, a - b);
    }
    else if (c == '*')
    {
        printf("%.2f %c %.2f = %.2f  \n", a, c, b, a * b);
    }
    else if (c == '/')
    {
        if (b == 0)
        {
            printf("syntax error(b can't be zero) \n");
        }
        else
        {
            printf("%.2f %c %.2f = %.2f  \n", a, c, b, a / b);
        }
    }

    return 0;
}