#include<stdio.h>
int main() 
{
int a1,b,i,hcf;
printf("enter two values\t");
scanf("%d%d",&a1,&b);
for(i=1;i<= a1||i<=b;i++) 
{
if(a1%i==0 && b%i==0)
hcf=i;
}
printf("HCF=%d",hcf);
return 0;
}
