#include <stdio.h>

int main(void) {
	int T,N,rem,rev,n[1000],i=0;
	scanf("%d",&T);
	while(T--)
	{
		rev = 0;
		scanf("%d",&N);
		while(N!=0)
		{
			rem = N%10;
			rev = rev*10 + rem;
			N = N/10;
		}
		n[i] = rev;
		i++;
	}
	for(int j=0;j<i;j++)
	printf("%d\n",n[j]);
		return 0;
}

