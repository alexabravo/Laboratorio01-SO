#include <stdio.h>
#include <unistd.h>

int main(){
	int f = fork(); 

	if (f==0){
		execl("Hello", (char*)NULL);}
	
	else{
		execl("Hello", (char*)NULL); 
		printf("%d\n", (int)getpid());
	}
	return(0);
}
