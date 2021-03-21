#include <stdio.h>

int main(void) 
{
 int t;
 scanf("%d",&t);
 while(t--)
 {
     int n , m ,k;
     scanf("%d%d%d",&n,&m,&k);
     while(n>m && k>0)
     {
         m++;
         k--;
     }
     while(m>n&& k>0)
     {
         n++;
         k--;
     }
     int r= n-m;
     if(r>0){
     printf("%d\n",r);
     }
     else
     {
         printf("%d \n",-r);
     }
 }

}

