#include <stdio.h>

int power(int a, int b)
{
    int c = 1;

    for (int i = 0; i < b; i++)
    {
        c = c * a;
    }

    return c;
}

int main()
{
    int a = 0, b = 0, c = 0;
    char d = 0;

    while (1)
    {
        printf("������һ��������(����0�˳�)��");
        scanf_s("%d", &a);
        if (a == 0)
        {
            return 0;
        }

        printf("��������һ��������(����0�˳�)��");
        scanf_s("%d", &b);
        if (b == 0)
        {
            return 0;
        }

        getchar();
        printf("�������������+ - * / %% ^��:");
        scanf_s("%c", &d, 1);

        if (d == '+') 
        {
            c = a + b;
        }
        else if (d == '-')
        {
            c = a - b;
        }
        else if (d == '*')
        {
            c = a * b;
        }
        else if (d == '/')
        {
            c = a / b;
        }
        else if (d == '%')
        {
            c = a % b;
        }
        else if (d == '^')
        {
            c = power(a, b);
        }
        printf("%d%c%d=%d\n", a, d, b, c);
    }

    return 0;
}
