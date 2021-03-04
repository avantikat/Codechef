#include <stdio.h>

int main(void) {
    int t,a,b,i;
    char n [1000000000];
    scanf("%d",&t);
    while(t--)
    {
        a=0,b=0,i=0;
        scanf("%s",n);
        while(n[i]!='\0')
        {
            if(n[i]== 'a')
            {
            a++;
        }
        else{
            b++;
        }
        i++;
    }
    
    
     if(a >= b )
	    {
	        printf("%d\n",b);
	    }
	    
	    else 
	    {
	        printf("%d\n",a);
	    }
	    
	    
	}
    
	
	return 0;
}

