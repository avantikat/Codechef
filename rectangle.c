#include <stdio.h>

int main(void) 
{
	int t;
	int a,b,c,d;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d %d %d %d",&a,&b,&c,&d) ;
	   if(a==b && c==d|| d==a && c==b || a==c &&b==d)
	   {
	       printf("YES\n");
	   }
	   else
	   {
	       printf("NO\n");
	   }
	}
	return 0;
}
