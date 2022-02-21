#include<stdio.h>
int main()
{
    int a,b,i,sum,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
    return 0;
}