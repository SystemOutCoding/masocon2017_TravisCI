#include <stdio.h>
#include <stdlib.h>
#include <time.h>
unsigned int nl(char * _argv);
unsigned int _random(unsigned int cntAttendees);
void lottery(unsigned int seed, char * _argv);

int main(int argc, char* argv[])
{
	unsigned int cntAttendees, seed;
	char * _argv = argv[argc - 1];
	char interrupter;
 	cntAttendees = nl(_argv);
	srand(time(NULL));
	printf("금일 참가한 인원윈 : %d명 입니다. \n", cntAttendees);
	
	while(interrupter != 'e'){
		seed = _random(cntAttendees);
		lottery(seed, _argv);
		scanf("%c", &interrupter);
	}

	return 0;
}

void lottery(unsigned int seed, char * _argv){
	char buf[256];
	FILE *ptr_file;
	ptr_file = fopen(_argv,"r");
	int i = 0;	
	while(fgets(buf,256,ptr_file)!=NULL){
		if(i == seed){
			printf("%s 축하합니다.", buf);
		}
		i++;
	}
	fclose(ptr_file);
}

unsigned int _random(unsigned int cntAttendees){
	return (rand() % cntAttendees);	
}

unsigned int nl(char * _argv){
	unsigned int nl = 0 ;
	char buf[256];
	int i = 0;
	FILE *ptr_file;
	printf("Target File : %s \n", _argv);	
	ptr_file = fopen(_argv, "r");	
	while (fgets(buf,256,ptr_file)!=NULL){
		nl++;		
	}
	if(!ptr_file)	return -1;
	fclose(ptr_file);
	return nl;
}
