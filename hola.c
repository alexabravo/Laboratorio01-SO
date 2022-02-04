#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Hello World!\n");
	printf("%s\n", (int)getpid()); 
	return(0);
}