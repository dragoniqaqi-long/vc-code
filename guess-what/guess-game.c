# include <stdio.h>
# include <stdlib.h>
# include <time.h>


int main(void)
{
	int guessnum;
	srand ( (unsigned) time (NULL) );    //���������(����ͬʱ��������������,�������)
	int ans = rand() % 100 ;    //�˴������������Χ��1-99  �����п����������˽�,��ʱ�������   
	int c = 0; //��cΪ�������,û��һ��,c++һ�� (�������д���������Ϊ����a��Ϊ��1-99�������,��ÿ�����г����Ƕ�����ͬ����,��ôa����������Ҫ�µ���)
	printf("guess game\n"
	     "������һ��С��100������\n");
	scanf("%d", &guessnum);
	
	int d = 7;          //��100������,���û���Ϊ7��
	                             //ʹ��whileѭ��,������Ϊû�µ�a���Ҵ������С���Դ�����������ִ��
	while (ans != guessnum&&c < d)       
	{
		c++;

        if (ans < guessnum)                  
		{
			printf("����,����������\n");
			printf("������ӵ��%d�λ���\n", d - c);
			scanf("%d", &guessnum);                      //ÿ�δ���һ��,����Ҫ��������µ�����,����scanf��Ҫ������while����н���ѭ��
		}
		/*for (; a < b; c++)
		{
			printf("����,����������\n");
			printf("������ӵ��%d�λ���\n", d - c);     ����������ǰ�Լ���Ĵ����,����˼��һ��,Ϊʲô�Ǵ��
			scanf_s("%d", &b);
		}*/
		else if (ans > guessnum)
		{
			printf("С��,����������\n");
			printf("������ӵ��%d�λ���\n", d - c);
			scanf("%d", &guessnum);
		}
		/*for (; a > b; c++)
		{
			printf("С��,����������\n");
			printf("������ӵ��%d�λ���\n", d - c);     �����Ҳ�Ǵ��
			scanf_s("%d", &b);
		}*/
	}
	if (ans == guessnum)
	{
		printf("��ȷ,��¶�����ȷ��%d\n", ans);
	}

	if (d == c && ans != guessnum)
	{
		printf("�����þ�,��Ϸ����,��ȷ����%d", ans);
	}
	return 0;
}