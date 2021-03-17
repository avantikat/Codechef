#include <stdio.h>

int main(void) {
    
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	   int count=0,n,i;
	   scanf("%d",&n);
	   while(n>0){
	    i=n%10;
	    if (i==4){
	        count++;
	    }
	    n=n/10;
	   }
	   printf("%d \n",count);
	   count=0;
	   t--;
	}
	return 0;
}

