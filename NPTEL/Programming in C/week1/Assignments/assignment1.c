#include<stdio.h>
int main()
{
    int rs100;
    int rs10;
    int rs1;
    int price;
    scanf("%d %d %d %d", &rs100, &rs10, &rs1, &price);
    int money;
    money=(rs100*100+rs10*10+rs1);
    if (money>=price)
    {
        /* code */
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}
//Did this on my own