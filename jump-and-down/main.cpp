/*题目说明:
一个小球从100m高处落下,落地后每次回弹至下落路程一半的位置,要求回答:

当第10次落地后,小球的经历路程是?小球反弹的高度又是?

*/
#include <iostream>
using namespace std;

double down (double a)
{
    return (a * 0.5);
}

int main()
{   
    double a,sum;
    sum = 0;
    a = 100.0;
    for(int i = 1;i <= 10;i++)
    {
        sum+=a;
        down(a);
        cout<<sum<<endl<<a<<endl;
    }
    
    return 0;
}