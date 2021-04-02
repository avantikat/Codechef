#include <stdio.h>

int main() 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
     	float a,b;
     	scanf("%f %f",&a,&b);
	    if (a<1000)
	    printf("%f\n",a*b);
	    else
	    printf("%f\n",(0.9*a*b));
	    }
	return 0;
}
