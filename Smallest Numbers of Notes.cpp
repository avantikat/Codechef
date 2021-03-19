#include <stdio.h>

int main(void) {
	int t,n, rem, count =0;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    count=n/100;
	    rem=n%100;
	    if(rem!=0)
	    {
	        count=count+rem/50;
	        rem=rem%50;
	        if (rem!=0)
	        {
	            count=count+rem/10;
	            rem=rem%10;
	            if(rem!=0)
	            {
	                count=count+rem/5;
	                rem=rem%5;
	                if(rem!=0)
	                {
	                    count= count+rem/2;
	                    rem=rem%2;
	                    if(rem!=0)
	                    {
	                       count=count+1;
	                       printf("%d\n",count);
	                    }
	                    else
	                    {
	                        printf("%d\n",count);
	                        }
	            }
	            else
	            {
	                printf("%d\n",count);
	            }
	        }
	        else
	        {
	            printf("%d\n",count);
	        }
	        
	    }
	    else
	    {
	        printf("%d\n",count);
	    }
	    
	}
	else{
	    printf("%d\n", count);
	}
	
	}
	
	
	return 0;
}
