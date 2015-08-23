#include <stdio.h>
#include <time.h>

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }

    return 1;
}

void assert(int i)
{
    if (i == 0)
    {
        __debugbreak();
    }
}

void unittest()
{
    assert(is_prime(-1) == 0);
    assert(is_prime(0) == 0);
    assert(is_prime(1) == 0);
    assert(is_prime(2) == 1);
    assert(is_prime(3) == 1);
    assert(is_prime(4) == 0);
    assert(is_prime(5) == 1);
    assert(is_prime(6) == 0);
    assert(is_prime(7) == 1);
    assert(is_prime(8) == 0);
    assert(is_prime(9) == 0);
    assert(is_prime(10) == 0);
}

void performance_test()
{
    clock_t begin = clock();
    for (int i = 1; i < 100000; i++)
    {
        if (is_prime(i) == 1)
        {
            //printf("%d ", i);
        }
    }
    //printf("\n");

    clock_t end = clock();
    clock_t time = end - begin;
    int ms = time * 1000 / CLOCKS_PER_SEC;
    printf("此函数运行时间为：%d毫秒\n", ms);
}

int main()
{
#ifdef _DEBUG
    unittest();
    performance_test();
#endif

    int n = 0;
    printf("请输入要判断是否为素数的正整数：");
    scanf_s("%d", &n);

    int b = is_prime(n);
    if (b == 1)
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数\n", n);
    }

    return 0;
}