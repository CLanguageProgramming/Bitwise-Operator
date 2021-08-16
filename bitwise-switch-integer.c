#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;
    int d;
    printf("A = ");
    scanf("%d", &a);
    printf("B = ");
    scanf("%d", &b);
    printf("Enter 1 for & operator, enter 2 for | operator and enter 3 for ^ operator");
    printf("\n>>");
    scanf("%d", &d);
    switch(d)
    {
        case 1:
                c = a & b;
                printf("%d & %d = %d", a, b, c);
                break;
                
        case 2:
                c = a | b;
                printf("%d | %d = %d", a, b, c);
                break;
                
        case 3:
                c = a ^ b;
                printf("%d ^ %d = %d", a, b, c);
                break;
                
        default:
                printf("Wrong number\n");
    }
}
