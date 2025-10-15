# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int main(void)
{
	int guessnum;
	srand ( (unsigned) time (NULL) );    //设置随机数(这里同时运用了两个函数,不用理解)
	int ans = rand() % 100 ;    //此处设置随机数范围在1-99  这两行可以网络上了解,暂时不用理解   
	int c = 0; //以c为错误次数,没错一次,c++一次 (以上两行代码可以理解为设置a成为了1-99的随机数,且每次运行程序都是独立不同的数,那么a就是我们需要猜的数)
	printf("guess game\n"
	     "请输入一个小于100的数字\n");
	scanf("%d", &guessnum);
	
	int d = 7;          //猜100以内数,设置机会为7次
	                             //使用while循环,条件即为没猜到a并且错误次数小于试错次数的情况下执行
	while (ans != guessnum&&c < d)      
	{
		c++;

        if (ans < guessnum)                  
		{
			printf("大了,请重新输入\n");
			printf("你现在拥有%d次机会\n", d - c);
			scanf("%d", &guessnum);                      //每次错误一次,都需要重新输入猜的数字,所以scanf需要包含在while语句中进行循环
		}
		/*for (; a < b; c++)
		{
			printf("大了,请重新输入\n");
			printf("你现在拥有%d次机会\n", d - c);     →这是我以前自己想的错误答案,可以思考一下,为什么是错的
			scanf_s("%d", &b);
		}*/
		else if (ans > guessnum)
		{
			printf("小了,请重新输入\n");
			printf("你现在拥有%d次机会\n", d - c);
			scanf("%d", &guessnum);
		}
		/*for (; a > b; c++)
		{
			printf("小了,请重新输入\n");
			printf("你现在拥有%d次机会\n", d - c);     →这个也是错的
			scanf_s("%d", &b);
		}*/
	}
	if (ans == guessnum)
	{
		printf("正确,你猜对了正确答案%d\n", ans);
	}

	if (d == c && ans != guessnum)
	{
		printf("次数用尽,游戏结束,正确答案是%d", ans);
	}
	return 0;
}