# include <stdio.h>
# include <math.h>
int main(void)
{
	int a ;
	int b ;
	int c ;

	printf("请输入三个数以表示一元二次方程的a,b,c:\n");
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	float delta;
	float x1;
	float x2;
	delta = b * b - 4 * c * a;
	
	if (delta > 0)
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		printf("该一元二次方程有两个解, x1 = %f, x2 = %f\n", x1, x2);
	}
	else if (delta == 0)
	{
		x1 = (-b) / (2 * a);
		x2 = x1;
		printf("该一元二次方程有唯一解,x1=x2=%f\n,", x1);
	}
	else 
	{
	    printf("无解/n");
    }
} 