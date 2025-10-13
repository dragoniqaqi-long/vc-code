#inlcude <stdio.h>

bool IsPrime(int);

int main()
{
    int num;
    printf("请输入一个数:");
    scanf("%d", &num);

    if (IsPrime(num))
        printf("该数字是素数\n");
    else
        printf("该数字不是素数\n");

    return 0;
}

bool IsPrime(int a)
{
    int i;
    if (a >= 1)
    {
        for (int i;i < a;++i)
        {
            if (a % i == 0)
                return false;
        }
        if (i == a)
            return true;
        else
            return false;
    }
}