#include <stdio.h>
int main()
{
    float s,h;
    h=100;
    for(int i=1; i<=10; i++){
        s=s+h;  // ����
        h = h / 2;
        s=s+h;  // ����
    }
    s=s-h;      // ȥ�����һ�η���
    printf("��10�����ʱ��������%f�ף���10�η�����%f��\n",s,h);
    return 0;
}