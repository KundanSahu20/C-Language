#include<stdio.h>
#include<conio.h>
void facto(int x);
void fibo(int n);
void main()
{
    int a,b;
    printf("\n Enter The Number To Find It's fectorial");
    scanf("%d",&a);
    facto(a);
    printf("\n Enter Number To Find n Terms of Fibonacci Series");
    scanf("%d",&b);
    fibo(b);
    getch();
}
void facto(int x)
{
int p,q=1;
for(p=x;p>=1;p--)
q=q*p;
printf("\n Factorial of %d=%d",x,q);
}
void fibo(int n)
{
    int r,s,t,u,v=1;
    r=0;
    s=1;
    printf("\nFibonacci series");
    printf("\n%d\n%d",r,s);
    for(t=2;t<n;t++) // for( t=3; t<=n; t++) or (t=n; t>2;t--)
    {
        u=r+s;
        printf("\n%d",u);
        v=v+u;
        r=s;
        s=u;
    }
    printf("\nSum=%d",v);
}