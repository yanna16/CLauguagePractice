#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int power(int a, int b)
{
    int c = a;

    for (int i = 1; i < b; i++)
    {
        c = c * a;
    }

    return c;
}

int main()
{
    int a, b, c;
    char d;

    while (1)
    {
        printf("������һ��������(����0�˳�)��");
        scanf("%d", &a);
        if (a == 0)
            return 0;

        printf("��������һ��������(����0�˳�)��");
        scanf("%d", &b);
        if (b == 0)
            return 0;

        getchar();
        printf("�������������+ - * / %% ^��:");
        scanf("%c", &d);

        if (d == '+') 
        {
            c = a + b;
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else if (d == '-') {
            c = a - b;
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else if (d == '*')
        {
            c = a * b;
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else if (d == '/')
        {
            c = a / b;
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else if (d == '%')
        {
            c = a % b;
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else if (d == '^')
        {
            c = power(a, b);
            printf("%d%c%d=%d\n", a, d, b, c);
        }
        else {
            printf("������ַ��Ƿ���");
        }
    }
    return 0;
}
