#include<stdio.h>
void f(int *a, int *b)
{
    int t;
    t= *a;
    *a= *b;
    *b= t;
}
main(){
    int a,b;
    scanf("%d%d",&a,&b);    
    f(&a,&b);
    printf("%d %d",a,b);
}