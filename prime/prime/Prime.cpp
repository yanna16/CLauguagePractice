/*
#include <stdio.h>

bool is_prime(int n)
{
    int i = 2;
    //��ʵ�������ֻ��2��3��5������
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
    printf("������Ҫ�ж��Ƿ�Ϊ��������������");
    scanf_s("%d", &n);

    bool b = is_prime(n);
    if (b == true)
    {
        printf("%d������\n", n);
    }
    else
    {
        printf("%d��������\n", n);
    }


    int m = factor(n);
    if (m == 0)
    {
        printf("%d������\n", n);
    }
    else
    {
        printf("%d������������С����Ϊ%d\n", n, m);
    }

    return 0;
}
*/
