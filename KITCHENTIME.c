#include <stdio.h>

int main() {
	// your code goes here
	short int t,x,y;
	scanf("%hd",&t);
	while(t--){
	    scanf("%hd%hd",&x,&y);
	    printf("%d\n",y-x);
	}
return 0;
}
