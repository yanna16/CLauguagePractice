/*
#include <stdio.h>

bool is_prime(int n)
{
    int i = 2;
    //其实这里可以只除2和3、5等奇数
    for (i = 2; i < n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int factor(int n)
{
    int i = 2;
    for (i = 2; i < n/2; i++)
    {
        if (n % i == 0)
        {
            return i;
        }
    }
    return 0;
}

int main()
{
    int n = 0;
    printf("请输入要判断是否为素数的正整数：");
    scanf_s("%d", &n);

    bool b = is_prime(n);
    if (b == true)
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数\n", n);
    }


    int m = factor(n);
    if (m == 0)
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数，最小因数为%d\n", n, m);
    }

    return 0;
}
*/
