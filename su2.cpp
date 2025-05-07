#include<stdio.h>
void f(int *a, int *b)
{
    int t;
    t= *a;
    *a= *b;
    *b= t;
}
main(){
    int A[5] = {1,2,3,4,5};
    int i, j;
    for(i=0;i<4;i++)
        for(j=i+1;j<5;j++)
            if(A[i] > A[j])
                f(&A[i],&A[j]);
    for(i=0;i<5;i++)
        printf("%d ",A[i]);

    
}