#include <stdio.h>

int main(void) {
		int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    long long int a,b,c,i=1;
	    scanf("%lld %lld %lld",&a,&b,&c);
	
	    while(i<=c)
	    {
	        if(i%2==1)
	            a=a*2;
	        else
	            b=b*2;
	        i++;
	    }
	    if(a>b)
	        printf("%lld\n",a/b);
	    else
	        printf("%lld\n",b/a);
	}
	return 0;
	
}
