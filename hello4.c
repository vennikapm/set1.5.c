#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,c;
printf("enter testcase");
scanf("%d",&n);
while(n>0)
{
printf("enter numbers");
scanf("%d %d %d",&a,&b,&c);
if(a>b&&a>c)
{
printf("%d is the greatest",a);
}
else if(b>a&&b>c)
{
printf("%d is the greatest",b);
}
else
{
printf("%d is the greatest",c);
}
n--;
}
getch();
}
