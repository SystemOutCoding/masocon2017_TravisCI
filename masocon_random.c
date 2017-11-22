#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]){
	unsigned int maxValue;
	char interrupter;
	printf("Input Max Value :");
	scanf("%d", &maxValue);
	while(interrupter != 'b'){
	scanf("%c", &interrupter);
	printf("%d", rand() % maxValue);
	
	}
}
