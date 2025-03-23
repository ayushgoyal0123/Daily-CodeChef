#include <stdio.h>

int main() {
	// your code goes here
	int x,y,t;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    printf(x>y?"A\n":"B\n");
	}
return 0;
}

