#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("      FIBONACCI SERIES");
    printf("\n");
    printf("\n  ***************************");
    printf("\n     Enter no. of terms :");
    scanf("%d",&n);
    printf("\n     Series :%d,%d",0,1);
    printf(fib(n-2));
}

int n1=0,n2=1,nt;
int fib(n)
{
    if(n>=1){
        nt=n1+n2;
        printf(",%d",nt);
        n1=n2;
        n2=nt;
        printf(fib(n-1));
    }
    printf("\n  ***************************");
    printf("\n");
}
