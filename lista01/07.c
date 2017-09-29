#include <stdio.h>

int main (void)	{
	int x, y, total=1,i ;

	scanf("%d",&x);
	scanf("%d",&y);

		for (i=0;i<y;i++) {
			total = x*total;
		
		}
	
	printf("O resultado é: %d", total);
                        
}
