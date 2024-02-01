#include<stdio.h>
main(){
    int a;
    int b;
    int t;
    scanf("%d %d",&a,&b);
    while (!(b==0))
    {
        t=a;
        a=b;
        b=t%b;
    }
    printf("%d\n",a);
}