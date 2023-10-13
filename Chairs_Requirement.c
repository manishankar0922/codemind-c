#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    if(a>b){
        c=a-b;
        printf("%d",c);
    }
    else
    {
        printf("0");
    }
}