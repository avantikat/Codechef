#include <stdio.h>

int main(void) {
	// your code goes here
	int t, n, a[200], i, j, temp, ans, m;
	
	scanf("%d", &t);
	
	while(t--)
	{
	    scanf("%d", &n);
	    m = 1;
	    a[0] = 1;
	    temp = 0;
	    
	    for(i = 1; i <= n; i++)
	    {
	        for(j = 0; j < m; j++)
	        {
	            ans= a[j] * i + temp;
	            a[j] = ans % 10;
	            temp = ans / 10;
	        }
	        
	        while(temp != 0)
	        {
	            a[m] = temp % 10;
	            temp = temp / 10;
	            m++;
	        }
	    }
	    
	    for(i = m - 1; i >= 0; i--)
	        printf("%d", a[i]);
	    printf("\n");
	}
	
	return 0;
}
