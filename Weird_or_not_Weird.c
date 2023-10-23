#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d",&a);
    if(a%2!=0)
    {
        printf("weird");
    }
    else if(a%2==0 && a%2>2 &&a%2<5)
    {
        printf("not weird");
    }
    else if(a%2==0 && a%2>6 &&a%2<20)
    {
        printf("weird"); 
    }
    else 
    {
        printf("not weird");
    }
}