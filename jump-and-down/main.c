/*题目说明:
一个小球从100m高处落下,落地后每次回弹至下落路程一半的位置,要求回答:

当第10次落地后,小球的路程是?小球反弹的高度又是?

*/
#include <stdio.h>

double down (double a)
{
    return a * 0.5;
}

int main()
{   
    int a = 100;
    for(int i = 1;i <= 10;i++)
    {
        down(a);
    }




    return 0;
}