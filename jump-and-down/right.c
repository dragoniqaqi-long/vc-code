#include <stdio.h>
int main()
{
    float s,h;
    h=100;
    for(int i=1; i<=10; i++){
        s=s+h;  // 下落
        h = h / 2;
        s=s+h;  // 反弹
    }
    s=s-h;      // 去掉最后一次反弹
    printf("第10次落地时，共经过%f米，第10次反弹高%f米\n",s,h);
    return 0;
}