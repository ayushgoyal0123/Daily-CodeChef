#include <stdio.h>

int main() {
	// your code goes here
	short int t,x,n;
	scanf("%hd",&t);
	while(t--){
	    scanf("%hd%hd",&n,&x);
	    printf("%hd\n",n-x);
	}
return 0;
}

