#include <stdio.h>

int main(void) {
	int n,t ,i,count1=0,count2=0;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	   scanf("%d",&n);
	    if(n%2==0)
	    {
	    count1++;
	      
	    }
	    else
	    {
	   count2++;
	    }
	}
	if(count1 > count2)
	   {
	          
	   printf("READY FOR BATTLE\n");
	    }
	    else
	    {
	    printf("NOT READY\n");
	    }
	
	return 0;
}

