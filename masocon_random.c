#include <stdio.h>
#include <stdlib.h>

unsigned int _random(unsigned int maxValue);

int main(int argc, char * argv[]){
	unsigned int maxValue;
	char interrupter;

	printf("Input Max Value :");
	scanf("%d", &maxValue);
	
	while(interrupter != 'b'){
		scanf("%c", &interrupter);
		printf("%d", _random(maxValue));
	}
}

unsigned int _random(unsigned int maxValue){
	return((rand() % maxValue)+1);
}




