#include <stdio.h>

int main() {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    printf("%d\n",x>y?x:y);
	}
return 0;
}

