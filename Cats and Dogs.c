#include <stdio.h>

int main(void) {
int t;
scanf("%d",&t);
while(t--)
{
 long c,d,l, max, min;
    scanf("1%d 1%d 1%d",&c,&d,&l);
    if(c>2*d)
    {
    min=(c-d)*4;
    }
    else
    {
    min= d*4;
    max=(c+d)*4;
    }
    if((l>=min)&&(l<=max)&&(l%4==0))
    {
       printf("yes\n"); 
    }
    else
    {
        printf("No\n");
    }
}

	return 0;
}

