# include <stdio.h>
# include <stdlib.h>
# include <time.h>

int main(void)
{
	int guessnum;
	srand ( (unsigned) time (NULL) );    //���������(����ͬʱ��������������,�������)
	int ans = rand() % 100 ;    //�˴������������Χ��1-99  �����п����������˽�,��ʱ�������   
	//�������д���������Ϊ����a��Ϊ��1-99�������,��ÿ�����г����Ƕ�����ͬ����,��ôa����������Ҫ�µ���
	
	int c = 0;int d; //��cΪ�������,ÿ��һ��,c++һ�� 
	printf("guess game\n"
	     "������һ��С��100������\n");
	scanf("%d", &guessnum);
	d = 7;
	
	//��100������,�����Դ����Ϊ7��
			//ʹ��whileѭ��,������Ϊû�µ�a���Ҵ������С���Դ�����������ִ��
	while (ans != guessnum && c < d)       
	{
		c++;
		if (d == c && ans != guessnum)
		{
			printf("�����þ�,��Ϸ����,��ȷ����%d", ans);
			return 0;
		}
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
		return 0;
	}

	/*if (d == c && ans != guessnum)
	{
		printf("�����þ�,��Ϸ����,��ȷ����%d", ans);
	}*/
	return 0;
}