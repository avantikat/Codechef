#include <stdio.h>
#include<string.h>
int main(void) {
	int t,k;
    scanf("%d",&t);
    while(t--)
     {
         int i=0,j=0;
         char str[100001];
         scanf("%s",str);
         for(k=0;k<strlen(str);k++)
          {
              if(str[k]=='0')
                i++;
              if(str[k]=='1')
                j++;
                
          }
          if(i==1 || j==1)
            printf("Yes\n");
          else
            printf("No\n");
     }
	return 0;
}
