#include <stdio.h>
int main(void) 
{
	int n,a,b,ar,p;
	scanf("%d %d",&a,&b);
	   ar=a*b;
	   p=(a+b)*2;
	   if(ar>p)
	   {
	   printf("Area\n%d",ar);
	   }
	   else if(ar<p)
	   {
	   printf("Peri\n%d",p);
	   }
	   else
	   {
	   printf("Eq\n%d",p);
	   }
	
	return 0;
}
