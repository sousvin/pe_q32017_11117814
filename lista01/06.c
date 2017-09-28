#include <stdio.h>

int main(void)    {
        int x,mult,fator;
	
	scanf("%d",&x);
	
		for (fator=1;x>1;x--) {
			fator = fator*x;
			
		}
	printf("O fatorial é %d \n", fator);
	
}

