#include <stdio.h>
int main(){
	int x;
	x = fork();
	if(x == 0) {
		execlp("/bin/ps","ps",NULL);
	}
	else 
		exit(0);
	return 0;
}
