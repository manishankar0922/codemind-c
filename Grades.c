#include<stdio.h>
int main()
{
    int p,c,b,m,co,i;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&co);
    i=(p+c+b+m+co)/5;
    if(i>=90)
    {
        printf("Grade A");
    }
    else if(i>=80)
    {
        printf("Grade B");
    }
    else if(i>=70)
    {
        printf("Grade C");
    }
    else if(i>=60)
    {
        printf("Grade D");
    }
   else if(i>=40)
    {
        printf("Grade E");
    }
    else if(i<40)
    {
        printf("Grade F");
    }
}