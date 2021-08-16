#include <stdio.h>

int main()
{
    char a;
    char b;
    char c;
    int d;
    printf("A = ");
    scanf("%c", &a);
    printf("B = ");
    scanf("%c", &b);
    printf("Enter 1 for & operator, enter 2 for | operator and enter 3 for ^ operator");
    printf("\n>>");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
                c = a & b;
                printf("%c & %c = %c", a, b, c);
                break;
                
        case 2:
                c = a | b;
                printf("%c | %c = %c", a, b, c);
                break;
                
        case 3:
                c = a ^ b;
                printf("%c ^ %c = %c", a, b, c);
                break;
                
        default:
                printf("Wrong number\n");
    }
}
