#include <stdio.h>

int main() {
	// your code goes here
	int t, a,x,b,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&x,&b,&y);
	    1.0*a/x>1.0*b/y?printf("ALICE\n"):1.0*a/x<1.0*b/y?printf("BOB\n"):printf("EQUAL\n");
	}
return 0;
}

