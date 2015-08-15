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
        printf("请输入一个正整数(输入0退出)：");
        scanf("%d", &a);
        if (a == 0)
            return 0;

        printf("请再输入一个正整数(输入0退出)：");
        scanf("%d", &b);
        if (b == 0)
            return 0;

        getchar();
        printf("请输入运算符（+ - * / %% ^）:");
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
            printf("输入的字符非法！");
        }
    }
    return 0;
}
