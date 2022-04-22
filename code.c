#include <stdio.h>
int main()
{
    float km,m,f,in,cm;
    printf("please enter the distance in km: ");
    scanf("%f",&km);
    m=km*1000;
    f=km*3281;
    in=km*39370;
    cm=km*100000;
    printf("The distance in m is %f\n",m);
    printf("The distance in f is %f\n",f);
    printf("The distance in in is %f\n",in);
    printf("The distance in cm is %f\n",cm);
    return 0;
}