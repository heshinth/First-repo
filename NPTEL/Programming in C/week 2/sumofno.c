#include <stdio.h>

main(){
    int a;
    int  s;
    s=0;
    scanf("%d",&a); 
    while (!(a==-1)){
        scanf("%d",&a);
        s=s+a;
    }
    printf("%d",s);
}