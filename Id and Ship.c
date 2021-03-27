#include <stdio.h>

int main(void) {
	int t ;
	scanf("%d",&t);
	
for ( int i=0;i<t*2;i++)
	{
	     char c;
	    scanf("%c",&c);
	   if(c== 'B' ||c== 'b')
	   printf("BattleShip\n");
	   if(c== 'C '|| c== 'c')
	   printf("Cruiser\n");
       if (c== 'D' || c== 'd')
       printf("Destroyer\n");
       if(c== 'F' ||c== 'f')
       printf("Frigate\n");
	}
	return 0;
}

