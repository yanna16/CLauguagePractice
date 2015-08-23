#include <stdio.h>
#include <time.h>

#define MAX_PRIMES 100000
int min_factor[MAX_PRIMES] = { 1, 1 };    //默认数组里的值都是0，值为0表示为素数，值为非0表示不是素数，且值为最小因子

void init()
{
    for (long long i = 2; i < MAX_PRIMES; i++)
    {
        if (min_factor[i] == 0)
        {
            for (long long j = i * i; j < MAX_PRIMES; j += i)
            {
                if (min_factor[j] == 0)
                {
                    min_factor[j] = (int)i;
                }
            }
        }
    }
}

int is_prime(int n)
{
    if (n < 2)
    {
        return 0;
    }
    if (n < MAX_PRIMES)
    {
        return min_factor[n] == 0 ? 1 : 0;
    }

    for (int i = 2; i <= n / 2; i++)
    {
        if (min_factor[i] == 0)
        {
            if (n % i == 0)
            {
                return 0;
            }
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
    assert(is_prime(MAX_PRIMES - 1) == 0);
    assert(is_prime(MAX_PRIMES) == 0);
    assert(is_prime(MAX_PRIMES + 1) == 0);

}

void performance_test()
{
    clock_t begin = clock();
    init();
    for (int i = 1; i < MAX_PRIMES; i++)
    {
        if (is_prime(i) != 0)
        {
            //printf("%d ", i);
        }
    }
    //printf("\n");

    clock_t end = clock();
    clock_t time = end - begin;
    int ms = time * 1000 / CLOCKS_PER_SEC;
    printf("时间为：%d毫秒\n", ms);
}

int main()
{
    //init();
#ifdef _DEBUG
    performance_test();
    unittest();
#endif

    int n = 0;
    printf("请输入要判断是否为素数的正整数：");
    scanf_s("%d", &n);

    int b = is_prime(n);
    if (b != 0)
    {
        printf("%d是素数\n", n);
    }
    else
    {
        printf("%d不是素数\n", n);
    }

    return 0;
}