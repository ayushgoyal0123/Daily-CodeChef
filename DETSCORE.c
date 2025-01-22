#include <stdio.h>

int main() {
	// your code goes here
	short int t,x,n;
	scanf("%hd",&t);
	while(t--){
	    scanf("%hd%hd",&x,&n);
	    printf("%hd\n",x/10*n);
	}
return 0;
}

